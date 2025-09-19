
````markdown
# Git Rebase Example – Calculator Project

We will create a `calculator.sh` file and demonstrate **Git rebase** by replaying commits from the `feature` branch on top of `master`.

---

## 🔹 Step 1: Create master branch with addition & subtraction
```bash
git init calculator-rebase-demo
cd calculator-rebase-demo

echo '#!/bin/bash' > calculator.sh
echo 'echo "Addition: $((2+3))"' >> calculator.sh
echo 'echo "Subtraction: $((5-2))"' >> calculator.sh

git add calculator.sh
git commit -m "Add addition and subtraction"
````

---

## 🔹 Step 2: Create feature branch with multiplication & division

```bash
git checkout -b feature

echo 'echo "Multiplication: $((3*4))"' >> calculator.sh
echo 'echo "Division: $((10/2))"' >> calculator.sh

git add calculator.sh
git commit -m "Add multiplication and division"
```

---

## 🔹 Step 3: Rebase feature branch on top of master

```bash
git checkout feature
git rebase master
```

This **reapplies the feature commits on top of master**, creating a clean linear history.

---

## 🔹 Step 4: Merge (fast-forward) master with feature

```bash
git checkout master
git merge feature
```

---

## 🔹 Step 5: Branch Diagram (Rebase)

```
Before Rebase:
master: C1
feature:    C2

After Rebase:
master: C1 --------
                 \
feature (rebased): C2'
```

* **C1** → Addition & Subtraction (master)
* **C2** → Multiplication & Division (feature, old commit)
* **C2'** → Rebased commit on top of master

⚡ Notice: History is **linear**, no extra merge commit.

---

## 🔹 Step 6: Final calculator.sh after rebase

```bash
#!/bin/bash
echo "Addition: $((2+3))"
echo "Subtraction: $((5-2))"
echo "Multiplication: $((3*4))"
echo "Division: $((10/2))"
```

---

✅ Now `master` has a **clean history** and contains all operations: **Add, Sub, Mul, Div**.

```

