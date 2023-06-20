#include "main.h"

/**
 * print_times_table - prints the n time table starting with 0.
 * @n: function parameter, conatains an integer value.
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i, j, z, times;

		for (i = 0 ; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				times = j * i;
				if (j == 0)
				{
					_putchar(times + '0');
				}
				else if (times < 10 && j != 0)
				{
					_putchar(',');
					for (z = 0 ; z < 3 ; z++)
						_putchar(' ');
					_putchar(times + '0');
				}
				else if (times >= 10 && times < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((times / 10) + '0');
					_putchar((times % 10) + '0');
				}
				else if (times >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((times / 100) + '0');
					_putchar(((times / 10) % 10) + '0');
					_putchar((times % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
