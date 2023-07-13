#include "main.h"

/**
*_calloc - allocates memory for an array, using malloc.
*@nmemb: an integer
*@size: an integer
*
*Return: a pointer to the allocated area, if _calloc fails it will return NULL
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		free(ptr);
		ptr = NULL;
		return (NULL);
	}
	while (i < nmemb)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}
