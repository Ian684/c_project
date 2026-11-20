# C practice

Small C exercises covering arithmetic input, dynamic allocation, and numeric
string conversion.

## Programs

| File | Focus |
|---|---|
| `hello.c` | Read two numbers and an operator, then calculate the result |
| `malloc.c` | Allocate, initialize, read, and free a small integer buffer |
| `StringToOther.c` | Convert text input with `strtod` |
| `array_stats.c` | Read five integers and calculate basic statistics |
| `reverse_string.c` | Read and reverse a line of text |
| `factorial.c` | Calculate a bounded factorial |
| `prime_check.c` | Test whether an integer is prime |
| `linked_list.c` | Build, traverse, and free a linked list |
| `word_count.c` | Count whitespace-separated words from standard input |

## Build and run

The repository includes a Makefile for GCC or Clang:

```bash
make
./bin/hello
./bin/malloc
./bin/StringToOther
```

Run all build checks with:

```bash
make check
```

The added exercises progress from arrays and strings to recursion-style
thinking, dynamic data structures, and character processing. They are small
single-file examples intended for experimentation with compiler warnings,
debuggers, and sanitizers.

The existing source files are intentionally kept as small practice examples.
The compiler flags in the Makefile enable common warnings without changing
the exercises themselves.

## Extended exercises

The repository now includes additional examples for arithmetic, arrays, strings, recursion, pointers, bit operations, data structures, and standard input processing.
