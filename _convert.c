#include "holberton.h"
/**
* _convert - prints argument based on conversion specifier
* @a: char input
* @args: list of arguments
* @chars: character count
*
* Return: number of characters
*/
int _convert(char a, va_list args, unsigned int chars)
{
	char *tmp;

	switch (a)
	{
		case 'c':
			_putchar(va_arg(args, int));
			chars++;
			break;
		case 's':
			tmp = va_arg(args, char *);
			if (tmp == NULL)
				return (0);
			chars = _puts(tmp, chars);
			break;
		case '%':
			_putchar('%');
			chars++;
			break;
		default:
			_putchar(a);
			chars++;
			break;
	}
	return (chars);
}
