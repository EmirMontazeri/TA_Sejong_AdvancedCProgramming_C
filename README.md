# Advanced C Programming Lab (Spring 2026)

Sejong University - Course by Prof. MinJong Cheon

Lab slides, runnable code examples, an assignment and the midterm exam I prepared for the lab component of Advanced C Programming. The content follows the topics taught in the course; the slides, examples and questions are my own work.

## Lab sessions
**Selected sessions only**

Each session folder holds the slides and every code example from them as a standalone `.c` file, numbered in slide order.

| Session | Topics                                                           | Materials                                             |
|:-------:|------------------------------------------------------------------|-------------------------------------------------------|
| 1       | 1D arrays, strings as `char` arrays, 2D arrays                   | [Lab01_Arrays_Strings](Labs/Lab01_Arrays_Strings)     |
| 3       | `<stdio.h>`, formatted input with `scanf()`, scansets, `fgets()` | [Lab03_IO](Labs/Lab03_IO)                             |
| 5       | Scope rules: local vs. global variables                          | [Lab05_Scope](Labs/Lab05_Scope)                       |
| 7       | Pointers to pointers                                             | [Lab07_DoublePointers](Labs/Lab07_DoublePointers)     |
| 8       | Structures (`struct`) and `typedef`                              | [Lab08_Structs_Typedef](Labs/Lab08_Structs_Typedef)   |
| 10      | Function pointers and callbacks                                  | [Lab10_FunctionPointers](Labs/Lab10_FunctionPointers) |

## Assignments & exams

| | Covers | File |
|---|---|---|
| Lab Assignment 1 | Pointer bugs, `scanf` vs. scansets, 1D arrays | [PDF](Assignments/Assign1_AdvancedC.pdf) |
| Midterm Exam | Arrays, strings, pointers, memory | [PDF](<Assignments/MidtermExam(C_Programming).pdf>) |

## Notes on the examples
 
- Every `.c` file is a complete program and should run separately using any local or online C compiler or online compiler.
- Some examples read keyboard input; when using online compiler, one that supports standard input should be used.
- Files ending in `_ERROR.c` are **meant not** to compile as they only show a mistake discussed on the slides (e.g. using a local variable outside its scope).

## License

- Code (`.c` files): [MIT](LICENSE)
- Slides, assignments and exams (`.pdf` files): [CC BY 4.0](LICENSE-DOCS) — free to share and adapt with attribution
