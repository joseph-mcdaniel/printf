#include "holberton.h"
/**
* _printf - writes formatted output
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
			_convert(format[++i], arguments);
			chars += 2;
		}
	}
	return (chars);
}
