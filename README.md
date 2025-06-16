# FILE-MANAGEMENT-TOOL

COMPANY NAME -CODTECH IT SOLUTIONS

NAME -Aditya AnandKumar Kalamdane

INTERN ID -CT08DK534

DOMAIN NAME -C++ PROGRAMMING

DURATION -8 WEEKS(APRIL 20th to JUNE 20th 2025)

MENTOR -NEELA SANTHOSH KUMAR


📌 Overview


This C++ application is a console-based Employee Record System that demonstrates the basics of file handling using fstream. It allows users to:

📝 Write employee data to a binary file.

➕ Append new records.

📖 Read and display all saved employee records.

It uses Object-Oriented Programming (OOP) principles with class inheritance and encapsulation to manage employee data.



🎯 Learning Objectives


By studying this program, you’ll learn:

✅ How to use file streams (ifstream, ofstream, fstream) for binary file operations.

🧱 Understand OOP fundamentals: class inheritance, encapsulation, and access specifiers.

📥 Writing and 📤 reading binary data from files.

🧵 Creating a menu-driven program with switch-case.

🔁 Using loops for multiple entries and dynamic interaction.

🧹 File validation and error checking (if(!file)).



⚙️ How It Works: Step-by-Step Breakdown


1️⃣ Class Structure
🔹 Employee (Base class)
Holds:

eid – Employee ID

name – Employee Name

salary – Employee Salary

Contains:

menu() – The main interface function.

🔸 Employeeinfo (Derived from Employee)
Contains:

getinfo() – Accepts employee data from user.

putinfo() – Displays employee data in formatted output.

writedata() – Writes new data to file (overwrites file).

appenddata() – Adds new data to existing file content.

readdata() – Reads and displays all records from file.

2️⃣ File Handling


The program uses the file:
📂 Employee.txt – binary file that stores serialized data.

Modes:

ios::out | ios::binary → Overwrite & write in binary.

ios::app | ios::binary → Append in binary.

ios::in | ios::binary → Read in binary.

Binary Mode ensures structured data storage as memory image (write((char*)&emp, sizeof(emp))).

3️⃣ The Menu 🧭


When the program starts, main() calls menu() which displays:

pgsql
Copy
Edit
1. Write data into the file
2. Append data to the file
3. Read data from the file
User selects an option, and control switches to the appropriate function.



4️⃣ Writing Data ✍️


Opens file in write mode (ios::out) – old content is erased.

Collects one employee record using getinfo().

Serializes the object and stores it using file.write(...).

Then returns to menu.



5️⃣ Appending Data ➕


Opens file in append mode (ios::app).

Allows multiple entries using a while(ch == 'y') loop.

Prompts user if they want to continue entering more employees.



6️⃣ Reading Data 📖


Opens file in read mode (ios::in).

Checks if file exists (if (!file)).

Reads records sequentially using file.read(...) until eof().

Uses putinfo() to print the formatted data.



🧠 Key Concepts Reinforced


Binary File I/O 📂 – Real-world data persistence.

Classes and Objects 🧱 – Structured data storage.

Inheritance 👨‍👦 – Code reuse.

Object Serialization 💾 – Store objects in raw memory format.

Menu-driven program 🎛 – User interaction logic.



🚀 Real-world Applications


✅ Basic employee management systems.

✅ Foundation for payroll or HR systems.

✅ Suitable for student records, inventory systems, etc.

✅ Learning bedrock for database-backed applications (transition from files to SQL).



🧭 Possible Enhancements


🔐 Add input validation (e.g., no negative salary).

💾 Allow deleting/updating employee records.

🧠 Use vector/array to manage multiple in-memory records.

📂 Use text format for human-readable storage.

🔀 Replace binary file with CSV or JSON formats.

🗂 Move to database (SQLite, MySQL) for large scale.



