 File that outlines the process of creating your `calculator.sh`, committing it to a Git repository, and pushing it to GitHub. This is meant to serve as documentation for your project, showing how you set everything up.

### `push_request.md`

````markdown
# Push Request for Calculator Script (`calculator.sh`)

## Overview
This document outlines the steps to create, commit, and push a simple `calculator.sh` script to a GitHub repository.

### 1. Create `calculator.sh` Script

The first step is to create the `calculator.sh` script with basic functionality for addition and subtraction.

#### Example `calculator.sh`:
```bash
#!/bin/bash

# Simple calculator for addition and subtraction

echo "Enter first number:"
read num1

echo "Enter second number:"
read num2

echo "Choose operation (1 for Addition, 2 for Subtraction):"
read operation

if [ $operation -eq 1 ]; then
    result=$(($num1 + $num2))
    echo "The result of addition is: $result"
elif [ $operation -eq 2 ]; then
    result=$(($num1 - $num2))
    echo "The result of subtraction is: $result"
else
    echo "Invalid operation choice!"
fi
````

### 2. Initialize Git Repository

#### Step 1: Initialize the Git repository in your project directory.

```bash
cd path/to/your/project
git init
```

#### Step 2: Check the repository status to see untracked files.

```bash
git status
```

### 3. Add `calculator.sh` to the Git Repository

#### Step 1: Stage the `calculator.sh` file.

```bash
git add calculator.sh
```

#### Step 2: Commit the file with an appropriate message.

```bash
git commit -m "Initial commit - Add calculator.sh script for addition and subtraction"
```

### 4. Create and Push to GitHub Repository

#### Step 1: Create a new repository on GitHub

* Go to GitHub and create a new repository (e.g., `calculator-example`).
* Make sure it’s a public or private repository depending on your preference.

#### Step 2: Link your local Git repository to the GitHub repository.

Replace `your-username` and `calculator-example` with your actual GitHub username and repository name.

```bash
git remote add origin https://github.com/your-username/calculator-example.git
```

#### Step 3: Push the code to GitHub's `main` branch.

Make sure you're pushing to the `main` branch, which is the default branch.

```bash
git push -u origin main
```

**Note**: If you encounter an error about "password authentication," follow the steps below for Personal Access Token (PAT) authentication.

### 5. Authentication with GitHub (If Required)

GitHub no longer supports password-based authentication. You need to use a **Personal Access Token (PAT)** for authentication.

#### Step 1: Generate a PAT on GitHub

* Go to [GitHub Settings](https://github.com/settings/tokens).
* Click **Generate new token** and select the appropriate scopes (e.g., `repo`).
* Copy the generated token immediately.

#### Step 2: Use PAT for Git Authentication

* When prompted for a password during `git push`, paste the PAT instead of your password.

### 6. Verify Push on GitHub

* After pushing, visit your GitHub repository URL:

  ```
  https://github.com/your-username/calculator-example
  ```
* You should see the `calculator.sh` file listed in your repository.

### 7. Future Updates

* To make future changes and push them to GitHub:

  1. Edit the `calculator.sh` file.
  2. Stage the file:

     ```bash
     git add calculator.sh
     ```
  3. Commit the changes:

     ```bash
     git commit -m "Update calculator.sh to include more operations"
     ```
  4. Push the changes:

     ```bash
     git push origin main
     ```

---

