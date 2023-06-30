#include "main.h"
/**
*print_number - prints an integer
*@n: function parameter
*
*/

void print_number(int n)
{
	unsigned int i = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
	{
		_putchar(n + '0');
	}
	else
	{
		while ((n / 10) != 0 || n > 0)
		{
			i = (i * 10) + (n % 10);
			n /= 10;
		}
		while ((i / 10) != 0 || i > 0)
		{
			_putchar((i % 10) + '0');
			i /= 10;
		}
	}
}
