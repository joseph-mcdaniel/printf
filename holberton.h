#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdlib.h>
#include <stdarg.h>
int _printf(const char *format, ...);
int _putchar(char c);
void print_unum(unsigned int n);
void print_number(long long int n);
void rev_string(char *);
unsigned int _convert(char a, va_list args, unsigned int chars);
unsigned int _puts(char *str, unsigned int chars);
unsigned int _strlen(char *s);
unsigned int digit_count(int);
unsigned int binary(unsigned int num);
char *rot13(char *s);
#endif
