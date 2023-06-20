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
		while ( j < 10)
		{
			times = i * j;
			_putchar((times / 10) + '0');
			_putchar((times % 10) + '0');
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		j++;
		}

	_putchar('\n');
	i++;
	}
}
