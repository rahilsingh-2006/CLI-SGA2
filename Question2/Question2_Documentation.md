# Question 2 - Process Management Using fork(), wait(), and Signals

## Command 1

```bash
gcc process_monitor.c -o process_monitor
```

**Explanation:**
This command compiled the C source file into an executable named `process_monitor`. The compilation completed successfully without errors.

---

## Command 2

```bash
./process_monitor
```

**Explanation:**
This command executed the program. The parent process created a child process using `fork()`, detected that the child became unresponsive, terminated it using `SIGKILL`, and used `waitpid()` to prevent a zombie process.

---

## Program Output

```
Parent Process. Child PID = 2677
Child Process Started. PID = 2677
Child is unresponsive. Sending SIGKILL...
Child process terminated and zombie process prevented.
```

*(Your Child PID may be different. That is normal.)*

---

# Concept Explanation

The program creates a child process using `fork()`, allowing the parent and child to execute independently. The child simulates an unresponsive process by running continuously.

The parent process waits for a short period, then sends the `SIGKILL` signal to terminate the unresponsive child. Finally, the parent calls `waitpid()` to collect the child's exit status, preventing the child from remaining as a zombie process. Together, `fork()`, signal handling, and `waitpid()` ensure proper process creation, monitoring, termination, and cleanup.
