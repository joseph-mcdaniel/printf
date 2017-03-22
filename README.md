# Create printf function
## Intro:
Program created to emulate printf
### Function Macros utilized:
* write
* malloc
* free
* va_start
* va_end
* va_copy
* va_arg

Compilation:
* Version  4.8.4 (C90)
* gcc -Wall -Werror -Wextra -pedantic *.c

Header:
* Prototypes of functions will be stored in holberton.h

## File Description:
* _convert.c - Function that prints argument based on conversion specifier -
variadic function with switch case statement for each type (s, c, i, etc.)
* _printf.c - Function that writes formatted output - variadic function that
calls _convert function.
### Helper Functions:
* binary.c - Converts decimal to binary
* digit-count.c - Counts the numberof chars in a digit
* print_number.c - Prints integer
* _putchar.c - Prints a char
* _puts.c - Prints a string
* rev_string.c - Print string in reverse
* strlen.c - Return length of string
