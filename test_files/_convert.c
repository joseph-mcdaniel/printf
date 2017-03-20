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

	switch (a)
	{
		case 'c':
			chars += _putchar(va_arg(args, int));
			break;
		case 's':
			tmp = va_arg(args, char *);
			if (tmp == NULL)
				return (0);
			chars = _puts(tmp, chars);
			break;
	case 'i':
		print_number(va_arg(args, int));
		chars++;
		break;
	case 'd':
		print_number(va_arg(args, int));
		chars++;
		break;
		default:
			_putchar(a);
			chars++;
			break;
	}
	return (chars);
}
