#include "main.h"

/**
*array_range - creates an array of integers.
*@min: an integer
*@max: an integer
*
*Return: the pointer to the newly created array, If malloc fails, return NULL,
*		If min > max, return NULL.
*/
int *array_range(int min, int max)
{
	int a, i = 0, j = min;
	int *p;

	if (min > max)
	{
		return (NULL);
	}
	a = max - min + 1;
	p = (int *)malloc(a * sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}
	while (i < a)
	{
		p[i] = j;
		i++;
		j++;
	}
	return (p);
}
