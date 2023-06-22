#include "main.h"
/**
*print_square - prints a square, followed by a new line.
*@size: function parameter: contain an integer value
*
*/
void print_square(int size)
{
	if (size > 0)
	{
		int i = 0, j;

		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				_putchar('#');
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
