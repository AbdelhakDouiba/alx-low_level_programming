#include "main.h"

/**
*print_binary - prints the binary representation of a number.
*@n: intger
*
*/

void print_binary(unsigned long int n)
{
	unsigned long int number = n;
	int length = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while ((number >>= 1) != 0)
	{
		length++;
	}
	while (length >= 0)
	{
		if ((n >> length) & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		length--;
	}
}
