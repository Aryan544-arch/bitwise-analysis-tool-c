Bitwise Analysis Tool

A command-line application developed in C (C11) to analyse 8-bit unsigned integer values and perform fundamental bitwise operations.

Overview

The Bitwise Analysis Tool provides an interactive way to understand binary representation and bit manipulation.

Users can enter an 8-bit unsigned integer, view its decimal, hexadecimal and binary representations, perform bitwise operations and manipulate individual bits through an interactive menu.

The application also maintains the modified value across consecutive operations.

Features

1. Number Representation

Displays the entered number in three formats:

- Decimal
- Hexadecimal
- Binary (exactly 8 bits)

2. Bitwise Operations

Supports four fundamental bitwise operations:

Operation| Operator
AND| "&"
OR| `
XOR| "^"
Complement| "~"

AND, OR and XOR operations use the fixed hexadecimal value "0x0F". The complement result is restricted to 8 bits.

3. Individual Bit Manipulation

An interactive menu provides the following operations:

Operation| Description
Check| Determines whether a selected bit is set or unset.
Set| Changes a selected bit to 1.
Clear| Changes a selected bit to 0.
Toggle| Reverses the state of a selected bit.
Exit| Terminates the interactive menu.

Valid bit positions range from 0 to 7.

4. Persistent State Management

The application maintains two separate values:

- "originalValue" – stores the initially entered number.
- "currentValue" – stores the latest value after bit manipulation.

SET, CLEAR and TOGGLE modify "currentValue", while CHECK only examines it.

This allows multiple operations to be performed sequentially without losing previous modifications.

Example

For an initial input of "10":

Initial representation

Format| Value
Decimal| 10
Hexadecimal| 0xA
Binary| 00001010

Example bit manipulation sequence

Operation| Result
Set bit 0| 11
Toggle bit 1| 9
Clear bit 3| 1

Each operation works on the latest current value.

Technologies and Concepts

- Language: C11
- "stdio.h" – input and output.
- "stdint.h" – fixed-width integer types.
- "stdbool.h" – Boolean data type.
- Bitwise operators and bit masks.
- Bit shifting.
- Pointers.
- Functions and modular programming.
- Loops and conditional statements.
- Input validation.
- Type conversion and integer promotion.
- Program state management.

Requirements

- GCC compiler or another C11-compatible compiler.
- A terminal or command-line environment.

Compilation and Execution

Compile

Using GCC:

gcc -std=c11 -Wall -Wextra -Wpedantic -Wconversion -Wsign-conversion main.c -o main

Run on Linux/macOS

./main

Run on Windows PowerShell

.\main.exe

Project Structure

bitwise-analysis-tool-c/
│
├── main.c
├── README.md
├── .gitignore
│
└── docs/
    └── project-report.md

Input Validation

The application currently:

- Accepts values within the range 0–255.
- Rejects values exceeding 255.
- Rejects input that causes numeric conversion failure.
- Validates bit positions between 0 and 7.

Known limitation: Input is currently handled using "scanf()", so inputs containing a valid numeric prefix followed by extra characters, such as "12abc", are not fully validated.

Limitations

- Supports only 8-bit unsigned integer values.
- Does not directly interact with physical hardware or microcontrollers.
- Does not yet provide complete-line input validation.

Future Improvements

- Implement complete-line input validation using "fgets()" and string conversion functions.
- Add a reset-to-original-value option.
- Display original and current values together.
- Support configurable bit widths.
- Introduce automated testing.

Learning Outcomes

This project demonstrates practical understanding of:

1. Binary and hexadecimal number representation.
2. Bitwise operators and bit manipulation.
3. Bit masks and bit shifting.
4. Pointers and modifying variables through functions.
5. Modular program design.
6. Input validation and program state management.
7. Type conversion and integer promotion.

Author

[Your Name]

---

An educational C programming project focused on understanding binary representation and fundamental bitwise operations.