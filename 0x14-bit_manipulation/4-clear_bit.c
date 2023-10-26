#include "main.h"

/**
*clear_bit - sets the value of a bit to 0 at a given index.
*@n: value
*@index: value
*
*Return: 1, -1 if it fails
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int del = ~(1 << index);
	unsigned long int size = sizeof(n) * 8 - 1;

	if (index > size)
	{
		return (-1);
	}
	*n &= del;
	return (1);
}
