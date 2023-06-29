#include "main.h"

/**
*_strncat - concatenates two strings.
*@dest: function parameter
*@src: function parameter
*@n: function parameter
*
*Return: concatenates two strings.
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, lendest, lensrc;

	for (lendest = 0; dest[lendest] != '\0'; lendest++)
	{
	}
	for (lensrc = 0; src[lensrc] != '\0'; lensrc++)
	{
	}
	if (n >= lendest)
	{
		return (&src[lensrc]);
	}
	else
	{
		while (i < n)
		{
			dest[lendest + i] = src[i];
			i++;
		}
		return (dest);
	}
}
