# Introduction to Programming (C++)

[繁體中文](./README.md) | [English](./README.en.md)

This repository documents my C++ programming exercises and learning progress in **Introduction to Programming (C++)**, offered at National Taiwan Ocean University (NTOU) during Fall 2026. Source code and the required test input files are organized by lab number.

## Course Information

| Item | Details |
| --- | --- |
| University | National Taiwan Ocean University (NTOU) |
| College | College of Electrical Engineering and Computer Science |
| Course | Introduction to Programming (C++) |
| Course Code | B60015SW |
| Semester | Fall 2026 (115-1) |
| Instructor | Yun-Hua Tseng |
| Credits | 3 |
| Course Type | Elective |
| Affiliated Program | Taiwan Artificial Intelligence College Alliance (TAICA) |

## Lab Overview

The following summaries describe the programming concepts and exercises without reproducing original handouts or full assignment statements.

| Lab | Topic | Exercises |
| --- | --- | --- |
| [Lab 1](./lab1/) | Getting Started with C++ | Basic text output and triangle printing using `cout` |
| [Lab 2](./lab2/) | Literals & Variables | Inverse of a 2×2 matrix; mean and variance of three subject scores |
| [Lab 3](./lab3/) | IOStream | Rectangle area and perimeter from file input; formatted grade sheet |
| [Lab 4](./lab4/) | Mathematical Operations | ReLU, Sigmoid, and Softsign activation functions; stellar magnitude difference |
| [Lab 5](./lab5/) | Conditional Statements | Equation validation; conditional information printer |
| [Lab 6](./lab6/) | Repetition Statements | Manhattan-distance grid; match results and win-rate analysis |
| [Lab 7](./lab7/) | Functions | Texas Poker round simulation; counting poker-hand combinations |

## Repository Structure

```text
.
├── README.md
├── README.en.md
├── .gitignore
├── lab1/
│   ├── lab1_1.cpp
│   └── lab1_2.cpp
├── lab2/
│   ├── lab2_1.cpp
│   └── lab2_2.cpp
├── lab3/
│   ├── data.txt
│   ├── lab3_1.cpp
│   └── lab3_2.cpp
├── lab4/
│   ├── lab4_1.cpp
│   └── lab4_2.cpp
├── lab5/
│   ├── lab5_1.cpp
│   └── lab5_2.cpp
├── lab6/
│   ├── lab6_1.cpp
│   └── lab6_2.cpp
└── lab7/
    ├── input1.txt
    ├── input2.txt
    ├── input3.txt
    ├── lab7_1.cpp
    └── lab7_2.cpp
```

> The directory tree reflects Labs 1–7 currently organized in this repository. Additional labs can be added as the course progresses.

## Development Environment & Usage

- **Language:** C++
- **Editor:** Visual Studio Code
- **Operating System:** macOS
- **Compiler:** Clang++ or G++ (the examples below use `g++`)

Compile and run a program from the repository root:

```bash
g++ -std=c++17 lab1/lab1_1.cpp -o lab1_1
./lab1_1
```

For programs reading local input files, run the executable from the appropriate working directory or adjust the relative paths accordingly. For example:

```bash
cd lab3
g++ -std=c++17 lab3_1.cpp -o lab3_1
./lab3_1
```

## Learning Objectives

- Build a foundation in C++ syntax, types, and input/output.
- Practice mathematical operations, conditionals, loops, and functions.
- Work with file input and formatted output.
- Develop debugging, logical reasoning, and problem-solving skills through hands-on programming.

## References

- Walter Savitch, *Problem Solving with C++*, Global Edition, 10th Edition (2018).
- Course materials and laboratory exercises (not redistributed in this repository).

## Disclaimer

This is a personal learning repository, not an official university or course resource. To respect intellectual property rights, **original PDF handouts, lecture slides, and examination documents are not included**. Any public release of assignment solutions should also comply with the course's academic integrity and publication rules.
