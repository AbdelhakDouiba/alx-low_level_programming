#include "main.h"

/**
*_memset - fills memory with a constant byte.
*@str: function parameter
*@b: function parameter
*@n: function parameter
*
*Return: fills memory with a constant byte.
*/
char *_memset(char *str, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		str[i++] = b;
	}
}
