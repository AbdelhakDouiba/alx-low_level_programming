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
	int i = 0, len;

	for (len; dest[len] != '\0'; len++)
	{
	}
	while (i < n)
	{
		dest[len + i] = src[i];
	}
	return (dest);
}
