#include "main.h"

/**
*print_times_table - prints the 9 times table, starting with 0.
*@n: function parameter, contain an integer value
*/
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i = 0, j, times;

		while (i < (n + 1))
		{
			j = 0;
			while (j < (n + 1))
			{
				times = i * j;
				if (times < 10)
				{
					_putchar(times + '0');
				}
				else if (times > 9 && times < 100)
				{
					_putchar10(times);
				}
				else
				{
					_putchar100(times);
				}
				if (j < n)
				{
					_putcharco();
				}
				if ((times < 10 && j < n) && ((j + 1) * i) < 10)
				{
					_putcharsp();
				}
				if ((times > 9 && j < n) && ((j + 1) * i) < 100)
				{
					_putchar(' ');
				}
			j++;
			}
		_putchar('\n');
		i++;
		}
	}
}
