#include "main.h"
/**
*print_triangle - prints a triangle, followed by a new line
*@size:function parameter, conatain an integer value
*
*/
void print_triangle(int size)
{
	int i = 0, j;

	while (i < size)
	{
		size = size - i;
		j = size - 1;
		while (j >= 0)
		{
			if (j < (size - 1))
			{
				_putchar(' ');
			}
			else if (j == (size - 1))
			{
				_putchar('#');
			}
			j--;
		}
		i++;
	}
	_putchar('\n');
}
