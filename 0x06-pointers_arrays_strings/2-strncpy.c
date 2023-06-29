#include "main.h"

/**
*_strncpy - copies a string
*@n: function parameter
*@src: function parameter
*@dest: function parameter
*
*Return: copies a string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
