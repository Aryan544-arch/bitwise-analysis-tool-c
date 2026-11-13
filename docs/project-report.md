BITWISE ANALYSIS TOOL

Project Report

Programming Language: C (C11)
Project Type: Command-Line Application
Difficulty Level: Beginner to Intermediate

---

1. Introduction

The Bitwise Analysis Tool is a command-line application developed in the C programming language to perform fundamental bitwise operations on 8-bit unsigned integer values.

Computers represent information internally using binary digits (0s and 1s). In programming, particularly in low-level operations, understanding how individual bits are represented, accessed and modified is important.

This application allows users to examine decimal, hexadecimal and binary representations of a number and perform different bitwise operations. It also provides an interactive menu for checking, setting, clearing and toggling individual bits.

2. Problem Statement

In computer systems, individual bits are frequently used to represent states, control operations and store information efficiently.

Understanding and manipulating these bits requires knowledge of binary representation, bitwise operators and bit masks.

The objective of this project is to develop a command-line application that accepts an 8-bit unsigned integer and provides functionality to analyse its representation and perform bitwise operations.

The application should also allow users to manipulate individual bits interactively while maintaining changes across consecutive operations.

3. Project Objectives

- Understand decimal, hexadecimal and binary number representations.
- Implement bitwise AND, OR, XOR and complement operations.
- Understand the use of bit masks and bit shifting.
- Develop functionality to check, set, clear and toggle individual bits.
- Practise functions and modular programming.
- Understand pointers and how functions can modify variables.
- Implement basic input validation.
- Understand program state management.
- Develop practical experience with the C11 programming standard.

4. Functional Requirements

4.1 Input Handling

The application must:

- Accept an unsigned integer from the user.
- Restrict the accepted value to the range 0–255.
- Reject input that cannot be converted into an unsigned integer.
- Reject values exceeding the supported range.
- Convert the validated input into an 8-bit unsigned integer.

4.2 Number Representation

The application must display the entered number in three different formats:

1. Decimal
2. Hexadecimal
3. Binary

The binary representation must contain exactly eight bits, including leading zeros.

Example:

For an input value of 10:

Representation| Output
Decimal| 10
Hexadecimal| 0xA
Binary| 00001010

4.3 Bitwise Operations

The application must perform the following operations using the fixed hexadecimal value "0x0F":

- Bitwise AND ("&")
- Bitwise OR ("|")
- Bitwise XOR ("^")
- Bitwise Complement ("~")

The complement operation must produce an 8-bit result.

Example:

For an input value of 10:

Operation| Result
AND| 0xA
OR| 0xF
XOR| 0x5
Complement| 0xF5

4.4 Individual Bit Manipulation

The application must provide an interactive menu containing the following options:

1. Check a Bit
2. Set a Bit
3. Clear a Bit
4. Toggle a Bit
5. Exit

The user must select a valid bit position between 0 and 7.

Description of operations:

Check a Bit: Determines whether the selected bit is set (1) or unset (0).

Set a Bit: Changes the selected bit to 1 without affecting other bits.

Clear a Bit: Changes the selected bit to 0 without affecting other bits.

Toggle a Bit: Reverses the selected bit's state. A 0 becomes 1, and a 1 becomes 0.

Invalid bit positions must be rejected.

4.5 Program State Management

The application must maintain two separate values:

- "originalValue": Stores the initially entered number and remains unchanged.
- "currentValue": Stores the latest value after bit manipulation.

The SET, CLEAR and TOGGLE operations modify "currentValue", while CHECK only examines it.

Changes must persist across consecutive operations.

5. Technical Concepts Used

The project demonstrates the following C programming concepts:

- C11 programming standard.
- Fixed-width integer types using "stdint.h".
- Boolean data types using "stdbool.h".
- Unsigned integer handling.
- Decimal, hexadecimal and binary representation.
- Bitwise operators.
- Bit masks and bit shifting.
- Functions and modular programming.
- Pointers and pass-by-value behaviour.
- Loops and conditional statements.
- Input validation.
- Type conversion and integer promotion.
- Program state management.

6. Program Structure

The application is divided into functions to maintain modularity and separate responsibilities.

Function| Responsibility
"numberRepresentation()"| Displays decimal, hexadecimal and binary representations.
"bitwiseOperation()"| Performs AND, OR, XOR and complement operations.
"individualBitManipulation()"| Controls the interactive menu and program flow.
"bitChecking()"| Checks whether a selected bit is set or unset.
"bitSetting()"| Sets a selected bit.
"bitClearing()"| Clears a selected bit.
"bitToggling()"| Toggles a selected bit.

7. Testing and Validation

The application should be tested using normal, boundary and invalid inputs.

7.1 Input Testing

Test Input| Expected Behaviour
0| Accept
1| Accept
10| Accept
127| Accept
128| Accept
255| Accept
256| Reject
-1| Reject
Non-numeric text| Reject

7.2 Bit Manipulation Testing

Starting with an original value of 10:

Operation| Bit Position| Expected Current Value
Set| 0| 11
Toggle| 1| 9
Clear| 3| 1
Toggle| 0| 0
Set| 7| 128

7.3 Additional Test Cases

- Checking a set bit should report that it is set.
- Checking an unset bit should report that it is unset.
- Setting an already-set bit should not change the value.
- Clearing an already-clear bit should not change the value.
- Toggling the same bit twice should restore the previous value.
- Checking a bit must not modify the current value.
- Invalid bit positions must be rejected.
- Exiting the menu must terminate the bit manipulation process.

8. Known Limitations

- The application currently supports only 8-bit unsigned integer values.
- Input is handled using "scanf()". Consequently, inputs such as "12abc" are not fully validated.
- The application performs software-based bit manipulation and does not directly interact with physical hardware.

9. Future Improvements

The application can be extended with the following features:

- Complete-line input validation using "fgets()" and string conversion functions.
- An option to reset the current value to the original value.
- Simultaneous display of original and current values.
- Support for configurable bit widths.
- More advanced bit manipulation operations.
- Automated test cases.

10. Conclusion

The Bitwise Analysis Tool provides a practical implementation of fundamental bitwise operations using the C programming language.

It demonstrates how numerical values can be represented in different number systems and how individual bits can be inspected and modified using bitwise operators.

The project also provides practical experience with pointers, functions, input validation, type conversion and program state management.

Overall, it establishes a foundation for understanding low-level programming concepts and developing more advanced applications in C.

---

Project Name: Bitwise Analysis Tool
Programming Language: C (C11)
Project Type: Command-Line Application