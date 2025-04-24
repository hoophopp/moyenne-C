# 🎓 Student Information Manager in C

Hi there! 👋  
This is a simple C program I wrote to manage student records — like their name, age, and average (moyenne). It also calculates the overall class average and displays all the students' info neatly.

---

## 💡 What It Does

- Lets you enter info (name, surname, age, average) for multiple students.
- Prints out all student data in a clear format.
- Calculates and displays the **general average** of the class.

---

## 🧠 How It Works

### 1. `Etudiant` Structure  
We use a `struct` to store each student's:
- `nom` (last name)
- `prenom` (first name)
- `age` (in years)
- `moyenne` (average grade)

### 2. `afficherLesEtudiants()`  
This function prints the details of every student from the list.

### 3. `moyenneGeneral()`  
Adds up all students' grades and returns the class average.

### 4. `main()`  
The heart of the program:
- Asks the user for the number of students.
- Takes in each student's info.
- Calls the display and average functions.

---

## 🧪 Sample Output

