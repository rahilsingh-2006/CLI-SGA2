# Question 1 - Duplicate Submission Detection and Backup

## Objective

Design a shell script that:
- Identifies duplicate submissions.
- Creates a backup of unique submissions.
- Generates a report showing processed, duplicate, and backed-up files.
- Stores all error messages separately.

---

## Commands Executed and Explanation

### Command

```bash
mkdir submissions backup screenshots
```

**Explanation:**
Creates separate folders for submissions, backups, and screenshots.

---

### Command

```bash
echo "Assignment A" > submissions/student1.txt
```

**Explanation:**
Creates the first sample assignment file.

---

### Command

```bash
cp submissions/student1.txt submissions/student2.txt
```

**Explanation:**
Creates a duplicate submission for testing.

---

### Command

```bash
echo "Assignment B" > submissions/student3.txt
```

**Explanation:**
Creates another unique assignment file.

---

### Command

```bash
ls submissions
```

**Explanation:**
Verifies that all submission files were created successfully.

---

### Command

```bash
nano duplicate_check.sh
```

**Explanation:**
Creates the shell script.

---

### Command

```bash
chmod +x duplicate_check.sh
```

**Explanation:**
Makes the shell script executable.

---

### Command

```bash
./duplicate_check.sh
```

**Explanation:**
Executes the shell script to detect duplicate files, back up unique files, generate the report, and store errors separately.

---

### Command

```bash
cat report.txt
```

**Explanation:**
Displays the generated processing report.

---

### Command

```bash
cat errors.txt
```

**Explanation:**
Displays the error log generated during execution.

