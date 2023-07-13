#include "main.h"

/**
*malloc_checked - allocates memory using malloc.
*@b: function parameter
*
*Return: a pointer to the allocated area, else exit with 98
*/
void *malloc_checked(unsigned int b)
{
	void *p;

	if (b != 0)
	{
		p = malloc(b);
		if (p == NULL)
		{
			exit(98);
		}
		return (p);
	}
	exit(98);
}
