# 0x14. C - Bit manipulation

# Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google

# General
Look for the right source of information without too much help
How to manipulate bits and use bitwise operators.

# Requirements
# General
## Allowed editors: vi, vim, emacs
## All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
## All your files should end with a new line
## A README.md file, at the root of the folder of the project is mandatory
## Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
## You are not allowed to use global variables
## No more than 5 functions per file
## The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
## You are allowed to use _putchar
## You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
**In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples**
***The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h***
**Don’t forget to push your header file
All your header files should be include guarded.**

# TASKS

0. Write a function that converts a binary number to an unsigned int
1. Write a function that prints the binary representation of a number.

Prototype: void print_binary(unsigned long int n);
2. Write a function that returns the value of a bit at a given index.

Prototype: int get_bit(unsigned long int n, unsigned int index);
3. Write a function that sets the value of a bit to 1 at a given index.

Prototype: int set_bit(unsigned long int *n, unsigned int index);
4. Write a function that sets the value of a bit to 0 at a given index.

Prototype: int clear_bit(unsigned long int *n, unsigned int index);
5. Write a function that returns the number of bits you would need to flip to get from one number to another.

Prototype: unsigned int flip_bits(unsigned long int n, unsigned long int m);
6. Write a function that checks the endianness.

Prototype: int get_endianness(void);
Returns: 0 if big endian, 1 if little endian
7. Find the password for this program.

Save the password in the file 101-password
Your file should contain the exact password, no new line, no extra space.
