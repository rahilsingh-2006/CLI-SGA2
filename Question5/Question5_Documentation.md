# Question 5 - Recovery Mechanisms in vi

## Scenario

A software developer is editing a critical configuration file using `vi`. Before the file is saved, the system crashes.

---

## Recovery Mechanism 1: Swap Files

Swap files (`.swp`) are automatically created while editing a file. If the editor or system crashes, Vim can recover the unsaved changes from the swap file using the recovery option.

---

## Recovery Mechanism 2: Undo History

Undo history allows recently saved changes to be reversed using the `u` command. Persistent undo can also be enabled so that undo information remains available after reopening the file.

---

## Recovery Mechanism 3: Registers

Registers temporarily store deleted, copied, or yanked text. They help restore accidentally removed content during an editing session.

---

## Recovery Mechanism 4: Backup Files

Backup files preserve the previous version of a file before modifications are saved. They provide an additional layer of protection if incorrect changes are written to the file.

---

## Recovery Mechanism 5: Auto-Recovery

When Vim detects an existing swap file after a crash, it offers recovery options such as:

```bash
vim -r config.conf
```

or

```bash
vim -r
```

This restores the most recent recoverable version of the file.

---

# Most Reliable Recovery Strategy

The most reliable recovery strategy is using Vim's swap file and auto-recovery mechanism. Swap files are created automatically while editing, allowing recovery of unsaved work after a crash. Backup files provide protection for previously saved versions, while undo history and registers assist with correcting editing mistakes during normal use.

---

## Commands Used

```bash
vi config.conf
:q!
```

**Explanation:**

The `vi` editor was opened to simulate editing a configuration file. The editor was exited without saving to represent an interrupted editing session similar to the scenario described in the question.
