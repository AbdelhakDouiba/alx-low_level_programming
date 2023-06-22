#include "main.h"
/**
*print_diagonal - draws a diagonal line on the terminal.
*@n: function parameter, contain an integer value
*/
void print_diagonal(int n)
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
