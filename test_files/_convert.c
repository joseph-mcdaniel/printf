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
		chars += _puts(va_arg(args, int));
		if (chars < 0)
		{
			chars = -chars;
			_puts('-');
		}
		break;

		default:
			_putchar(a);
			chars++;
			break;
	}
	return (chars);
}
