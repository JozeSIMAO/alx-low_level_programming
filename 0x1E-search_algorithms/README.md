# Search Algorithms

This repository contains C programs that implement and analyze various search algorithms. The implementation adheres to specific guidelines outlined below:

## General Requirements

- Editors: vi, vim, emacs
- Compilation: Ubuntu 20.04 LTS using gcc with options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Files end with a new line
- Use Betty style, checked using `betty-style.pl` and `betty-doc.pl`
- No global variables allowed
- No more than 5 functions per file
- Use only the `printf` function from the standard library
- Include a `README.md` file at the root of the project
- Header files should be include guarded
- Prototypes of all functions in the `search_algos.h` header file
- Push the header file to the repository

## Task 0: Linear Search

Write a function that searches for a value in an array of integers using the Linear search algorithm.

```c
int linear_search(int *array, size_t size, int value);

