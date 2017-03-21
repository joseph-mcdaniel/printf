#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdlib.h>
#include <stdarg.h>
int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(char *s);
void print_unum(unsigned int n);
void print_number(int n);
void binary(unsigned n);
unsigned int _convert(char a, va_list args, unsigned int chars);
unsigned int _puts(char *str, unsigned int chars);
#endif
