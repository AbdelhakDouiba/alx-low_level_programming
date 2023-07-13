#include "main.h"

/**
*malloc_checked - allocates memory using malloc.
*@b: function parameter
*
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
