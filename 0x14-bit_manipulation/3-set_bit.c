#include "main.h"

/**
*set_bit - sets the value of a bit to 1 at a given index.
*@n: value
*@index: value
*
*Return: 1 if it worked, or -1 if an error occurre
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 0;
	unsigned long int ptr = *n, val = 0;

	if (index > 63)
	{
		return (-1);
	}
	while (i < 64)
	{
		if (i == index)
		{
			val += _power(2, i);
		}
		else
		{
		val += (ptr & 1) * _power(2, i);
		}
		ptr = ptr >> 1;
		i++;
	}
	*n = val;
	return (1);
}
/**
*_power - calculate power
*@a: int
*@n: int
*
*Return: power or 1
*/
int _power(int a, int n)
{
	int pow = a;

	if (n == 0)
	{
		return (1);
	}
	while (n > 1)
	{
		pow *= a;
		n--;
	}
	return (pow);
}
