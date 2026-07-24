#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

typedef struct {
    int id;
    char name[20];
    float salary;
} Employee;

int main() {
    int fd;
    Employee emp;

    fd = open("employees.dat", O_CREAT | O_RDWR | O_TRUNC, 0644);
    if (fd < 0) {
        perror("open");
        return 1;
    }

    Employee employees[] = {
        {101, "Alice", 50000},
        {102, "Bob", 60000},
        {103, "Charlie", 70000}
    };

    write(fd, employees, sizeof(employees));

    emp.id = 102;
    strcpy(emp.name, "Bob");
    emp.salary = 65000;

    lseek(fd, sizeof(Employee), SEEK_SET);
    write(fd, &emp, sizeof(Employee));

    lseek(fd, sizeof(Employee) * 2, SEEK_SET);
    read(fd, &emp, sizeof(Employee));

    printf("Retrieved Record:\n");
    printf("ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Salary: %.2f\n", emp.salary);

    close(fd);

    return 0;
}
