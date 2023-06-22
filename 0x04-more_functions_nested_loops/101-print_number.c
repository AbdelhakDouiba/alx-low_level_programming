#include "main.h"
/**
*print_number - print number
*@n: contain an integer value
*
*/
int print_number(int n)
{
	int i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}
	if (i / 10)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
