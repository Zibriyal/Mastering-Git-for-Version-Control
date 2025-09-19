
````markdown
# Git Cherry-Pick Example – Calculator Project

We will create a `calculator.sh` file and demonstrate **Git cherry-pick** by applying only selected commits from the `feature` branch into `master`.

---

## 🔹 Step 1: Create master branch with addition & subtraction
```bash
git init calculator-cherry-demo
cd calculator-cherry-demo

echo '#!/bin/bash' > calculator.sh
echo 'echo "Addition: $((2+3))"' >> calculator.sh
echo 'echo "Subtraction: $((5-2))"' >> calculator.sh

git add calculator.sh
git commit -m "Add addition and subtraction"
````

---

## 🔹 Step 2: Create feature branch with multiplication & division (separate commits)

```bash
git checkout -b feature

# Commit 1 → Multiplication
echo 'echo "Multiplication: $((3*4))"' >> calculator.sh
git add calculator.sh
git commit -m "Add multiplication"

# Commit 2 → Division
echo 'echo "Division: $((10/2))"' >> calculator.sh
git add calculator.sh
git commit -m "Add division"
```

---

## 🔹 Step 3: Cherry-pick only multiplication commit into master

```bash
git checkout master
git cherry-pick <commit-hash-of-multiplication>
```

---

## 🔹 Step 4: Branch Diagram (Cherry-pick)

```
master: C1 ---- C3 (cherry-picked: multiplication)
feature:    C2 (multiplication)
             C4 (division)
```

* **C1** → Addition & Subtraction (master)
* **C2** → Multiplication (feature)
* **C4** → Division (feature)
* **C3** → Cherry-picked commit from C2 into master

⚡ Notice: Master **only got Multiplication**, not Division.

---

## 🔹 Step 5: Final calculator.sh after cherry-pick

```bash
#!/bin/bash
echo "Addition: $((2+3))"
echo "Subtraction: $((5-2))"
echo "Multiplication: $((3*4))"
```

---

✅ Now `master` contains **Add, Sub, and Multiplication only**.
Division remains only in the `feature` branch.

```

