#include "holberton.h"
/**
* digit_count - counts the number of chars in a digit
* @n: number to count
*
* Return: character count
*/
unsigned int digit_count(int n)
{
	unsigned int count = 0;

	if (n == 0)
		return (1);
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}
