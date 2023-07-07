#include "main.h"
#include <stdio.h>

/**
*_strstr - locates a substring
*@haystack: function parameter
*@needle: function parameter
*
*Return: locates a substring
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0, k, j, len, count;

	for (len = 0; needle[len] != '\0'; len++)
	{
	}
	while (haystack[i] != '\0')
	{
		j = i;
		k = 0;
		count = 0;
		while (haystack[j] != '\0' && needle[k] != '\0')
		{
			if (haystack[j] == needle[k])
			{
				count++;
			}
			j++;
			k++;
		}
		if (count == len)
		{
			return (&(haystack[i]));
		}
		i++;
	}
	return (NULL);
}
