#include "main.h"

/**
*create_array - creates an array of chars, and initializes it
*		with a specific char.
*@size: function parameter
*@c: function paramter
*
*Return: a pointer to the array, NULL if size = 0 or if it fails
*/

char *create_array(unsigned int size, char c)
{
	int *p;

	if (size == 0)
	{
		return (NULL);
	}
	p = (int *)malloc(98 * sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}
	for(i = 0; i < 98; i++)
	{
		p[i] = c;
	}
	return (p);
}
