#include "main.h"

/**
*clear_bit - sets the value of a bit to 0 at a given index.
*@n: pointer to an integer
*@index: integer
*
*Return: 1 if it worked, or -1 if an error occurred
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int  var = 1;

	if (index > 63)
		return (-1);

	var <<= index;
	var = ~var;
	*n = *n & var;
	return (1);
}
