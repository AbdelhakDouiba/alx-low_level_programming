#include "main.h"

/**
*_realloc - reallocates a memory block using malloc and free
*@ptr: function parameter
*@old_size: an integer
*new_size: an integer
*
*Return: a pointer the re-allocated memory area
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i = 0, j = 0;
	void *p;

	if (ptr == NULL)
	{
		free(ptr);
		p = malloc(new_size);
		if (p == NULL)
		{
			free(p);
			return (NULL);
		}
		return (p);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (p == NULL)
	{
		free(ptr);
		return (NULL);
	}
	while (i < new_size && j < old_size)
	{
		*((char *)p +i) = *((char *)ptr +j);
		i++;
		j++;
	}
	free(ptr);
	return (p);
}
