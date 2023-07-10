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

	if (h <= 0 || w <= 0)
	{
		return (NULL);
	}
	p = (int **)malloc(h * sizeof(int *));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (k = 0; k < h; k++)
	{
		p[k] = (int *)malloc(w * sizeof(int));
		if (p[k] == NULL)
		{
			for(j = 0; j < k; j++)
			{
				free(p[j]);
			}
			free(p);
			return (NULL);
		}
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
