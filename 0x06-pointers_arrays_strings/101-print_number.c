#include "main.h"
/**
*print_number - prints an integer
*@n: function parameter
*
*/

void print_number(int n)
{
	unsigned int i = 0, count = 0, j, k = 0;

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
			j = i;
			i = (i * 10) + (n % 10);
			if (n % 10 == 0 && i == j)
			{
				count++;
			}
			n /= 10;
		}
		while ((i / 10) != 0 || i > 0)
		{
			_putchar((i % 10) + '0');
			i /= 10;
		}
		while (k < count)
		{
			_putchar(0 + '0');
			k++;
		}
	}
}
