#include "main.h"
/**
*_strcat - concatenates two strings.
*@src: function parameter
*@dest: function parameter
*
*Return: concatenates two strings.
*/
char *_strcat(char *dest, char *src)
{
	int i = 0, lensrc, lendest;

	for(lensrc = 0; src[lensrc] != '\0'; lensrc++)
	{
	}
	for(lendest = 0; dest[lendest] != '\0'; lendest++)
	{
	}
	while(i < lensrc)
	{
		dest[lendest + i] = src[i];
		i++;
	}
	return (dest);
}
