#include "main.h"

/**
*get_endianness - checks the endianness.
*
*Return: 0 or 1
*/
int get_endianness(void)
{
	unsigned int number = 1;
	unsigned int *ptr = (unsigned char *)&num;

	if (*ptr == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
