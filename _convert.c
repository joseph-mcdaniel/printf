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
			print_number(d);
			break;
		case 'r':
			tmp = va_arg(args, char *);
			if (tmp == NULL)
				return (0);
			chars += _strlen(tmp);
			rev_string(tmp);
			break;
		case 'b':
			d = va_arg(args, unsigned int);
			chars += digit_count(binary(d));
			print_number(binary(d));
			break;
		default:
			chars += _putchar(a);
	}
	return (chars);
}
