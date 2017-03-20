#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdlib.h>
#include <stdarg.h>
int _printf(const char *format, ...);
int _putchar(char c);
int _convert(char a, va_list args, unsigned int chars);
int _puts(char *str, unsigned int chars);
#endif
