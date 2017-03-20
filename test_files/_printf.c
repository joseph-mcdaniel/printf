#include "holberton.h"
/**
* _printf - writes formatted output
* @format: list of arguments
*
* Return: number of characters
*/
int _printf(const char *format, ...)
{
	va_list arguments;
	int i;
	unsigned int chars = 0;

	va_start(arguments, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			chars++;
			continue;
		}
		else
		{
			chars = _convert(format[++i], arguments, chars);
			if (chars == 0)
				return (0);
		}
	}
	return (chars);
}
