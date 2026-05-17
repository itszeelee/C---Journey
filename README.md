# My C++ Learning Journey

![Language](https://img.shields.io/badge/Language-C%2B%2B-blue)
![Level](https://img.shields.io/badge/Level-Beginner-green)
![Files](https://img.shields.io/badge/Programs-5-teal)
![Status](https://img.shields.io/badge/Status-In%20Progress-yellow)

> A personal collection of beginner C++ programs — from basic input/output to a fully working calculator. Each file represents a concept or topic studied, building from simple variables all the way to arrays, loops, functions, and input validation.

---

## At a Glance

| Files | Language | Topics Covered | Level |
|-------|----------|----------------|-------|
| 5 programs | C++ | 6 concepts | Beginner |

---

## Source Files

### 📄 `introduction.cpp` — Student Introduction
Takes user input for name, section, course, year level, and student number, then prints a formatted greeting. The starting point of the journey — focuses on `cin`, `cout`, and `string` variables.

**Concepts:** `iostream` · `string` · `cin / cout` · variables

---

### 📄 `fever_checker.cpp` — Body Temperature / Fever Checker
Continuously prompts the user for a temperature in Celsius, classifies it as normal, low fever, high fever, or hyperpyrexia using `if/else if`, and loops until the user quits. Introduces conditional logic and `while (true)` with `break`.

**Concepts:** `if / else if` · `while` loop · `float` · `char` input · `break`

---

### 📄 `country_even.cpp` — Countries & Even Numbers
Stores a list of even numbers and country names in 1D arrays, then prints them using both a `for` loop and a `while` loop — demonstrating two ways to iterate over the same data.

**Concepts:** 1D arrays · `for` loop · `while` loop · `string` array · `int` array

---

### 📄 `characters_prime.cpp` — Barbie Characters & Prime Numbers
Declares two 5×5 2D arrays — one of Barbie character names, one of the first 25 prime numbers — and prints both using nested `for` loops with `setw` for aligned output.

**Concepts:** 2D arrays · nested loops · `setw` / `iomanip` · formatted output

---

### 📄 `calculator.cpp` — Basic Calculator ⭐ *(most complex)*
A fully interactive calculator supporting addition, subtraction, multiplication, and division. Features a menu-driven `switch` statement, a `do...while` loop, function prototypes, pass-by-reference, division-by-zero handling, and robust input validation — the most complete program in the set.

**Concepts:** functions · `switch` · `do...while` · pass-by-reference (`&`) · input validation · `cin.fail()` · sentinel value · `double`

---

## Concepts Covered

| Step | Topic | Description |
|------|-------|-------------|
| 01 | **Basic I/O & Variables** | `cin`, `cout`, `string`, `int`, `float` — getting data in and out of a program |
| 02 | **Conditional Logic** | `if / else if / else` — making decisions based on values |
| 03 | **Loops** | `for`, `while`, `do...while` — repeating code and knowing when to use each |
| 04 | **Arrays & Nested Loops** | 1D and 2D arrays, iterating with nested loops, formatting output with `setw` |
| 05 | **Functions & Switch Statements** | Writing reusable functions, function prototypes, `switch/case`, pass-by-reference |
| 06 | **Input Validation & Error Handling** | `cin.fail()`, `cin.clear()`, `cin.ignore()`, sentinel values for error signaling |

---

## How to Compile & Run

Requires a C++ compiler such as **g++** (GCC).

```bash
# Compile and run any file
g++ filename.cpp -o output && ./output

# Examples
g++ introduction.cpp -o intro && ./intro
g++ fever_checker.cpp -o fever && ./fever
g++ country_even.cpp -o country && ./country
g++ characters_prime.cpp -o chars && ./chars
g++ calculator.cpp -o calc && ./calc
```

---

## What's Next

- [ ] Structs & Classes — bundling related data and introducing object-oriented programming
- [ ] Pointers & Memory — understanding how C++ manages memory directly
- [ ] File I/O — reading from and writing to files using `fstream`
- [ ] STL Containers — vectors, maps, and the standard library

---

*// made with dedication · C++ learning journey · keep compiling ✓*
