#include "main.h"

/**
*times_table - prints the 9 times table, starting with 0.
*
*/
void times_table(void)
{
	int i = 0, j, times;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			times = i * j;
			if (times < 10)
			{
				_putchar(times + '0');
			}
			else
			{
				_putchar((times / 10) + '0');
				_putchar((times % 10) + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			if ((j > 0) && (times < 10))
			{
				_putchar(' ');
				_putchar(' ');
			}
		j++;
		}

	_putchar('\n');
	i++;
	}
}
