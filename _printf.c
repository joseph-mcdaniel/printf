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

	if (format == NULL)
		return (-1);

	va_start(arguments, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			chars++;
		}
		else
			chars = _convert(format[++i], arguments, chars);
	}
	return (chars);
}
