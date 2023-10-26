#include "main.h"

/**
*binary_to_uint -  converts a binary number to an unsigned int
*@b: binary number
*
*Return: the converted number, or 0 there is one or more chars in the string b
*	 that is not 0 or 1, b is NULL.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, i = 0;
	int len;
	if (b == NULL)
	{
		return (0);
	}
	for (len = 0; b[len] != '\0'; len++){}
	len--;
	while(len >= 0)
	{
		if ((b[len] - 48) != 0 && (b[len] - 48) != 1)
		{
			return (0);
		}
		dec += (b[len] - 48) * (_power(2, i));
		i++;
		len--;
	}
	return (dec);
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
	while(n - 1)
	{
		pow *= a;
		n--;
	}
	return (pow);
}
