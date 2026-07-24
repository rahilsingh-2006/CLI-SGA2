#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>

int main() {
    pid_t pid = fork();

    if (pid < 0) {
        perror("fork");
        return 1;
    }

    if (pid == 0) {
        printf("Child Process Started. PID = %d\n", getpid());

        /* Simulate an unresponsive process */
        while (1) {
            sleep(1);
        }
    } else {
        printf("Parent Process. Child PID = %d\n", pid);

        sleep(5);

        printf("Child is unresponsive. Sending SIGKILL...\n");
        kill(pid, SIGKILL);

        waitpid(pid, NULL, 0);

        printf("Child process terminated and zombie process prevented.\n");
    }

    return 0;
}
