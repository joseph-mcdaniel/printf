#include "holberton.h"
/**
* _convert - prints argument based on conversion specifier
* @a: char input
* @args: list of arguments
* @chars: character count
*
* Return: number of characters
*/
unsigned int _convert(char a, va_list args, unsigned int chars)
{
	char *tmp;
	unsigned int d;

	switch (a)
	{
		case 'c':
			chars += _putchar(va_arg(args, int));
			break;
		case 's':
			tmp = va_arg(args, char *);
			if (tmp == NULL)
				return (0);
			chars += _puts(tmp, chars);
			break;
		case 'i':
			d = va_arg(args, int);
			chars += digit_count(d);
			print_number(d);
			break;
		case 'd':
			d = va_arg(args, int);
			chars += digit_count(d);
			print_number(va_arg(args, int));
			break;
		default:
			chars += _putchar(a);
			break;
	}
	return (chars);
}
