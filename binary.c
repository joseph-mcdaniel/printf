#include "holberton.h"
/**
* binary - converts decimal to binary
* @num: decimal number to convert
*
* Return: binary value
*/
unsigned int binary(unsigned int num)
{
	unsigned int bin = 0, place = 1, rem;

	while (num != 0)
	{
		rem = num % 2;
		bin = bin + (rem * place);
		num /= 2;
		place *= 10;
	}
	return (bin);
}
