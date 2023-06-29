#include "main.h"

/**
*reverse_array -reverses the content of an array of integers
*@a: function parameter
*@n: function paarameter
*
*/
void reverse_array(int *a, int n)
{
	int i = 0, j = n, tmp;

	while (i < j)
	{
		tmp = a[i];
		a[i] = a[k];
		a[j] = tmp;
		i++;
		j--;
	}
}
