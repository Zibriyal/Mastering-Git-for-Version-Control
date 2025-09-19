
````markdown
# Git Quick Guide

## 🔹 What is Git?
Git is a **distributed version control system** used to track code changes, collaborate with teams, and manage project history.

---

## 🔹 Branch
A branch is like a **parallel line of development**.  
- Default branch: `master` or `main`  
- Create branch:  
  ```bash
  git branch feature
  git checkout feature   # or git switch feature
````

---

## 🔹 Merge

Merges changes from one branch into another.

* Command:

  ```bash
  git checkout master
  git merge feature
  ```

---

## 🔹 Merge Conflict

Occurs when **two branches modify the same part of a file differently**.

* Git marks conflict inside file → you edit manually → then:

  ```bash
  git add <file>
  git commit
  ```

---

## 🔹 Rebase

Moves/replays commits from one branch on top of another, creating a **linear history**.

* Command:

  ```bash
  git checkout feature
  git rebase master
  ```

---

## 🔹 Cherry-Pick

Apply a **specific commit** from one branch into another.

* Command:

  ```bash
  git checkout master
  git cherry-pick <commit-hash>
  ```

---

## 🔹 Reset

Undo changes in different ways:

* **Soft reset** (keeps changes staged):

  ```bash
  git reset --soft <commit-hash>
  ```
* **Mixed reset** (keeps changes unstaged):

  ```bash
  git reset --mixed <commit-hash>
  ```
* **Hard reset** (discards changes):

  ```bash
  git reset --hard <commit-hash>
  ```

---

## 🔹 Important Git Commands

```bash
git init                  # Initialize repo
git clone <url>           # Copy repo from GitHub
git status                # Show changes
git add <file>            # Stage changes
git commit -m "message"   # Save changes
git log                   # Show commit history
git diff                  # Show unstaged changes
git branch                # List branches
git checkout <branch>     # Switch branch
git merge <branch>        # Merge branch
git rebase <branch>       # Rebase branch
git cherry-pick <hash>    # Pick specific commit
git reset <mode> <hash>   # Reset commits
git push                  # Upload to GitHub
git pull                  # Download & merge changes
```

```
so you have everything in one place?
```
