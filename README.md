## _printf
### Introduction:
Implementation of the printf function in the C standard library
#### Function Macros utilized:
* write
* malloc
* free
* va_start
* va_end
* va_copy
* va_arg

#### Environment:
* gcc 4.8.4 (C90)
* Ubuntu 14.04

#### Compilation:
`gcc -Wall -Werror -Wextra -pedantic *.c`

#### Usage:
```
/* main.c */
#include "holberton.h"
int main(void)
{
	_printf("Hello from _printf!\n");
	return (0);
}
```

#### Header file:
Prototypes of functions will be stored in holberton.h

### File Descriptions:
* `_convert.c` - Function that prints argument based on conversion specifier -
variadic function with switch case statement for each type (s, c, i, etc.)
* `_printf.c` - Function that writes formatted output - variadic function that
calls _convert function.
#### Helper Functions:
* `binary.c` - Converts decimal to binary
* `digit-count.c` - Counts the numberof chars in a digit
* `print_number.c` - Prints integer
* `_putchar.c` - Prints a char
* `_puts.c` - Prints a string
* `rev_string.c` - Print string in reverse
* `strlen.c` - Return length of string
### Collaborators
Jared Heck, Joe McDaniel
