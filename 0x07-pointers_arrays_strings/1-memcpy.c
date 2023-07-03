#include "main.h"

/**
*_memcpy - copies memory area.
*@dest: function parameter
*@src: function parameter
*@n: function parameter
*
*Return: copies memory area
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i++] = src[i];
	}
	return (dest);
}
