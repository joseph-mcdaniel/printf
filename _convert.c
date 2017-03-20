#include "holberton.h"
/**
*
*/
void _convert(char a, va_list args)
{
	char *tmp;

	switch (a)
	{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 's':
			tmp = va_arg(args, char *);
			if (tmp == NULL)
				tmp = "(nil)";
			printf("%s", tmp);
			break;
		default:
			_putchar(a);
			break;
	}
}
