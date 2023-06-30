#include "main.h"
/**
*print_number - prints an integer
*@n: function parameter
*
*/

void print_number(int n)
{
	unsigned int i = 0, count = 0, j, k = 0, num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	if (n == 0)
	{
		_putchar(n + '0');
	}
	else
	{
		while ((num / 10) != 0 || num > 0)
		{
			j = i;
			i = (i * 10) + (num % 10);
			if (num % 10 == 0 && i == j)
			{
				count++;
			}
			num /= 10;
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
