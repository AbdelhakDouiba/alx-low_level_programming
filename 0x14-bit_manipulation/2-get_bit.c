#include "main.h"

/**
*get_bit - returns the value of a bit at a given index.
*@n: intger
*@index: intger
*
*Return: the value of the bit at index index or -1 if an error occured.
*/

int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> index) & 1);
}
