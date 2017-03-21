#include "holberton.h"
/**
 * print_rev - print string in reverse
 * @s: input value
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;

	i = _strlen(s);
	for (i--; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
