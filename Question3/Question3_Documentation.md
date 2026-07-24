# Question 3 - File Processing Using Linux System Calls

## Command 1

```bash
gcc file_processing.c -o file_processing
```

**Explanation:**
This command compiled the C source file into an executable named `file_processing`. The program compiled successfully without errors.

---

## Command 2

```bash
./file_processing
```

**Explanation:**
This command executed the program. It created a file, stored employee records, updated one record using `lseek()`, and retrieved a specific record without reading the entire file.

---

## Program Output

```
Retrieved Record:
ID: 103
Name: Charlie
Salary: 70000.00
```

*(If your output differs slightly, copy your actual output here.)*

---

# Concept Explanation

The `open()` system call creates or opens the employee records file. `write()` stores employee records into the file, while `lseek()` moves the file pointer directly to a specific record, allowing updates without rewriting the entire file. `read()` retrieves records efficiently from any location, and `close()` safely closes the file and releases system resources.
