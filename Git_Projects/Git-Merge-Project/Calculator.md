
````markdown
# Git Merge Example – Calculator Project

We will create a `calculator.sh` file and demonstrate **Git merge** by combining a `feature` branch into `master`.

---

## 🔹 Step 1: Create master branch with addition & subtraction
```bash
git init calculator-merge-demo
cd calculator-merge-demo

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

## 🔹 Step 3: Merge feature branch into master

```bash
git checkout master
git merge feature -m "Merge feature branch with multiplication and division"
```

---

## 🔹 Step 4: Branch Diagram (Merge)

```
master: C1 --- C3 (merge commit)
           \ 
feature:    C2
```

* **C1** → Addition & Subtraction (master)
* **C2** → Multiplication & Division (feature)
* **C3** → Merge commit (master after merge)

---

## 🔹 Step 5: Final calculator.sh after merge

```bash
#!/bin/bash
echo "Addition: $((2+3))"
echo "Subtraction: $((5-2))"
echo "Multiplication: $((3*4))"
echo "Division: $((10/2))"
```

---

✅ Now `master` contains all operations: **Add, Sub, Mul, Div**.

```


