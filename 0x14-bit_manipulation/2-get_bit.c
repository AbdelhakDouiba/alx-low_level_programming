#include "main.h"

/**
*get_bit - returns the value of a bit at a given index.
*@n: intger
*@index: int
*
*
*Return: the value of a bit at a given index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
