# 0x01. Python - if/else, loops, functions

## Description

What you should learn from this project is the following:

- Why Python programming is awesome
- Why indentation is so important in Python
- How to use the if, if ... else statements
- How to use comments
- How to affect values to variables
- How to use the while and for loops
- How is Python’s for different from C‘s?
- How to use the break and continues statements
- How to use else clauses on loops
- What does the pass statement do, and when to use it
- How to use range
- What is a function and how do you use functions
- What does return a function that does not use any return statement
- Scope of variables
- What’s a traceback
- What are the arithmetic operators and how to use them

---

### [0-positive_or_negative.py](./0-positive_or_negative.py)

- This program will assign a random signed number to the variable number each time it is executed. Complete the source code in order to print whether the number stored in the variable number is positive or negative.

### [1-last_digit.py](./1-last_digit.py)

- This program will assign a random signed number to the variable number each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable number.

### [2-print_alphabet.py](./2-print_alphabet.py)

- Write a program that prints the ASCII alphabet, in lowercase, not followed by a new line.

### [3-print_alphabt.py](./3-print_alphabt.py)

- Write a program that prints the ASCII alphabet, in lowercase, not followed by a new line.

### [4-print_hexa.py](./4-print_hexa.py)

- Write a program that prints all numbers from 0 to 98 in decimal and in hexadecimal.

### [5-print_comb2.py](./5-print_comb2.py)

- Write a program that prints numbers from 0 to 99.

### [6-print_comb3.py](./6-print_comb3.py)

- Write a program that prints all possible different combinations of two digits.

### [7-islower.py](./7-islower.py)

- Write a function that checks for lowercase character.

### [8-uppercase.py](./8-uppercase.py)

- Write a function that prints a string in uppercase followed by a new line.

### [9-print_last_digit.py](./9-print_last_digit.py)

- Write a function that prints the last digit of a number.

### [10-add.py](./10-add.py)

- Write a function that adds two integers and returns the result.

### [11-pow.py](./11-pow.py)

- Write a function that computes a to the power of b and return the value.

### [12-fizzbuzz.py](./12-fizzbuzz.py)

- Write a function that prints the numbers from 1 to 100 separated by a space.

### [13-insert_number.c](./13-insert_number.c)

- Write a function in C that inserts a number into a sorted singly linked list.

### [100-print_tebahpla.py](./100-print_tebahpla.py)

- Write a program that prints the ASCII alphabet, in reverse orde

### [101-remove_char_at.py](./101-remove_char_at.py)

- Write a function that creates a copy of the string, removing the character at the position `n`

### [102-magic_calculation.py](./102-magic_calculation.py)

- Write the Python function that does exactly the same as the following Python bytecode:

```python
  3           0 LOAD_FAST                0 (a)
              3 LOAD_FAST                1 (b)
              6 COMPARE_OP               0 (<)
              9 POP_JUMP_IF_FALSE       16

  4          12 LOAD_FAST                2 (c)
             15 RETURN_VALUE

  5     >>   16 LOAD_FAST                2 (c)
             19 LOAD_FAST                1 (b)
             22 COMPARE_OP               4 (>)
             25 POP_JUMP_IF_FALSE       36

  6          28 LOAD_FAST                0 (a)
             31 LOAD_FAST                1 (b)
             34 BINARY_ADD
             35 RETURN_VALUE

  7     >>   36 LOAD_FAST                0 (a)
             39 LOAD_FAST                1 (b)
             42 BINARY_MULTIPLY
             43 LOAD_FAST                2 (c)
             46 BINARY_SUBTRACT
             47 RETURN_VALUE
```
