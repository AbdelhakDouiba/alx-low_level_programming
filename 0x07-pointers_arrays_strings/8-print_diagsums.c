#include "main.h"
#include <stdio.h>

/**
*print_diagsums - print_diagsums
*@a: function parameter
*@size: function parameter
*
*/
void print_diagsums(int *a, int size)
{
	int i = 0, sum_1 = 0, sum_2 = 0, j = 0;

	while (i < size)
	{
		sum_1 += a[i * size + j];
		j++;
		i++;
	}
	i = 0;
	while (i < size)
	{
		sum_2 += a[i * size + (size - i - 1)];
		i++;
	}
	printf("%d, %d\n", sum_1, sum_2);
}
