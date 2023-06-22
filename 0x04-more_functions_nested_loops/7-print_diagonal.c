#include "main.h"
/**
*print_diagonal - draws a diagonal line on the terminal.
*@n: function parameter, contain an integer value
*/
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i = 0, j;

		while (i < n)
		{
			j = 0;
			while (j < n)
			{
				if (i == j)
				{
					_putchar('\\');
					_putchar('\n');
				}
				else if (i > j)
				{
					_putchar(' ');
				}
				j++;
			}
			i++;
		}
	}
	else
	{
	_putchar('\n');
	}
}
