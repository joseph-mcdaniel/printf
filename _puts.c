#include "holberton.h"
#include <unistd.h>
/**
* _puts - prints a string
* @str: string input
* @chars: character count
*
* Return: number of characters
*/
unsigned int _puts(char *str, unsigned int chars)
{
	chars = _strlen(str);

	return (write(1, str, chars));
}
