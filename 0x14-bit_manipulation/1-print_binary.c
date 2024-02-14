#include "main.h"

/**
*print_binary - prints the binary representation of a number.
*@n: intger
*
*/

void print_binary(unsigned long int n)
{
	unsigned long int number = n;

	if (number == 0)
		_putchar('0');
	while (number)
	{
		if (number & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		number = number >> 1;
	}
}
