#include "main.h"

/**
*print_binary - prints the binary representation of a number.
*@n: int
*
*/
void print_binary(unsigned long int n)
{
	unsigned long int a = n;

	if (a > 1)
	{
		print_binary(a >> 1);
	}
	putchar((a & 1) + 48);
}
