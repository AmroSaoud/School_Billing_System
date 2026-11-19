# School Billing System

A command-line school administration and billing project written in C. The
program provides separate menus for student and teacher records and calculates
basic class fees and teacher salaries.

## Features

### Student records

- Add up to 100 student records during a program run.
- Store a student ID, name, gender, and grade.
- Display all students currently held in memory.
- Search student records by ID, first name, or gender.
- Calculate the class fee by adding 15% to the entered previous class amount.

### Teacher records

- Enter teacher ID, name, course, worked hours, and overtime.
- Calculate salary using the formula:

  ```text
  salary = (worked hours × 100) + (overtime × 150)
  ```

- Write teacher output to `test2.txt` and display the stored teacher data.

## Project structure

```text
.
├── README.md
└── School Billing System.c
```

## Requirements

- A C compiler such as GCC or Clang
- A terminal

## Build and run

Because the source filename contains spaces, quote it when compiling:

```sh
cc "School Billing System.c" -o school-billing-system
./school-billing-system
```

The program is interactive. Start by selecting an account type from the main
menu, then follow the prompts for student or teacher operations.

## Data and limitations

- Student records are stored only in memory and are lost when the program exits.
- Teacher output is written to `test2.txt` in the current working directory.
- The program accepts input with `scanf`; enter values in the format requested
  by each prompt.
- The current source requires a syntax fix for a missing closing brace before it
  can be compiled successfully. It also contains unfinished input validation
  and record-handling issues that should be addressed before production use.

## Authors

- Hassan Elshazly Eida
- Amr Mohamed Aboulsaoud
- Darwish Mohamed Darwish
