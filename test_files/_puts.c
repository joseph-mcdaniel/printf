#include "holberton.h"
/**
* _puts - prints a string
* @str: string input
* @chars: character count
*
* Return: number of characters
*/
unsigned int _puts(char *str, unsigned int chars)
{
	unsigned int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		chars++;
		_putchar(str[index]);
	}
	return (chars);
}
