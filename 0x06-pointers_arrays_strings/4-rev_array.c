#include "main.h"

/**
*reverse_array -reverses the content of an array of integers
*@a: function parameter
*@n: function paarameter
*
*/
void reverse_array(int *a, int n)
{
	int i = 0, j = n - 1, tmp;

	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}
