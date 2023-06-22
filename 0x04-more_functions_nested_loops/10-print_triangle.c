#include "main.h"
/**
*print_triangle - prints a triangle, followed by a new line.
*@size: function parameter: contain an integer value
*
*/
void print_triangle(int size)
{
	if (size > 0)
	{
		int i = 0, j, k;

		while (i < size)
		{
			k = size - 1 - i;
			j = 0;
			while (j < size)
			{
				if (j >= k)
				{
					_putchar('#');
				}
				else if (j < k)
				{
					_putchar(' ');
				}
			j++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
	{
	_putchar('\n');
	}
}
