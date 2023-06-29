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

	for (len = 0; src[len] != '\0'; len++)
	{
	}
	if (n > len)
	{
		while (i < len)
		{
			dest[i] = src[i];
			i++;
		}
		while (i >= len && i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (dest);
}
