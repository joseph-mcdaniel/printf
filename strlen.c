#include "holberton.h"
/**
 * _strlen - return length of
 * string
 * @s: input value
 *
 * Return: void
 */
unsigned int _strlen(char *s)
{
	unsigned int len;

	len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}
