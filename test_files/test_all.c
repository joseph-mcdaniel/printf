#include "holberton.h"
#include <stdio.h>
int main(void)
{
	int a, b;

	a = _printf("Char: %c\n", 'c');
	a += _printf("String: %s\n", "hello world");
	a += _printf("Percent: %%\n");
	a += _printf("Decimal: %d\n", 12);
	a +=_printf("Integer: %i\n", 34);
	_printf("Total: %d\n", a);

	b = printf("Char: %c\n", 'c');
	b += printf("String: %s\n", "hello world");
	b += printf("Percent: %%\n");
	b += printf("Decimal: %d\n", 12);
	b += printf("Integer: %i\n", 34);
	printf("Total: %d\n", b);
	return (0);
}
