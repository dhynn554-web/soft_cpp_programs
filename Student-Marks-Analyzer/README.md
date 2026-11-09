# Student Marks Analyzer

## 1. Project Overview

Student Marks Analyzer is a C++ mini project developed to calculate and analyze students' academic performance. The program accepts marks from multiple students and generates a detailed analytical report.

## 2. Features

- Accepts the number of students (1–100).
- Accepts individual student marks (0–100).
- Validates student marks to prevent invalid values.
- Calculates total marks.
- Calculates average marks.
- Identifies the highest mark.
- Identifies the lowest mark.
- Counts the number of passed students.
- Counts the number of failed students.
- Allows users to perform multiple analyses without restarting the program.

## 3. Concepts Used

- Functions and Function Declarations
- Arrays and Pointers
- Loops and Conditional Statements
- Dynamic Memory Allocation
- Input and Output Operations
- Type Casting
- Memory Deallocation

## 4. Passing Criteria

A student is considered **Passed** if their mark is 40 or above.

A student scoring below 40 is considered **Failed**.

## 5. Technologies Used

- Programming Language: C++
- Header File: iostream
- Compiler: GCC (g++)
- Code Editor: Visual Studio Code

## 6. How to Run the Program

### Step 1: Compile

```bash
g++ student_marks_analyzer.cpp -o student_marks_analyzer
```

### Step 2: Execute

On Windows:

```powershell
.\student_marks_analyzer.exe
```

## 7. Sample Output

```text
===== STUDENT MARKS ANALYSIS REPORT =====

Total Students : 5
Total Marks    : 350
Average Mark   : 70
Highest Mark   : 95
Lowest Mark    : 35
Passed         : 4
Failed         : 1

=========================================
```

*Note: Sample output is illustrative. Actual results depend on the marks entered.*

## 8. Project Structure

```text
Student-Marks-Analyzer/
├── student_marks_analyzer.cpp
└── README.md
```

## 9. Project Objective

The objective of this project is to apply fundamental C++ programming concepts to a practical problem while improving logical thinking, modular programming and problem-solving skills.

---

**Project:** Student Marks Analyzer

**Language:** C++

**Project Type:** College Mini Project
