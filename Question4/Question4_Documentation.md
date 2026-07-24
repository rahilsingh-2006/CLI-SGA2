# Question 4 - Log Monitoring Using Linux Commands

## Command

```bash
tail -f system.log | grep --line-buffered "ERROR" > error_report.txt 2>/dev/null
```

**Explanation:**
This command continuously monitored the log file for new entries. Only lines containing `ERROR` were written to `error_report.txt`, while unnecessary error messages were discarded using `/dev/null`.

---

## Additional Commands

```bash
echo "ERROR: Test error message" >> system.log
cat error_report.txt
```

**Explanation:**
A new log entry was appended to the log file. The monitoring pipeline immediately detected the new `ERROR` entry and stored it in the report file.

---

# Concept Explanation

`tail -f` continuously monitors the log file and displays new entries as they are added. The output is passed through a pipe (`|`) to `grep`, which filters only the lines containing `ERROR`. Output redirection (`>`) stores the filtered messages in `error_report.txt`, while `2>/dev/null` suppresses unnecessary error messages by discarding standard error output. Together, these commands create an efficient real-time log monitoring pipeline.
