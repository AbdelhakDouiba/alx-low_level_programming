#include "main.h"
/**
*alloc_grid - returns a pointer to a 2 dimensional array of integers.
*@w: width
*@h: height
*
*Return: a pointer to a 2 dimensional array of integers.
*/
int **alloc_grid(int w, int h)
{
	int i = 0, j, k;
	int **p;

	p = (int **)malloc(h * sizeof(int));
	for (k = 0; k < h; k++)
	{
		p[k] = (int *)malloc(w * sizeof(int));
	}
	while (i < h)
	{
		j = 0;
		while (j < w)
		{
			p[i][j] = 0;
			j++;
		}
		i++;
	}
	return (p);
}
