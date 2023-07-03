#include "main.h"

/**
*_strpbrk - searches a string for any of a set of bytes.
*@s: function parameter
*@accpet: function parameter
*
*Return: string for any of a set of bytes
*/
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0, j = 0, count = 0, len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	while (i <= len)
	{
		j = 0;
		count = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
			}
			j++;
		}
		if (count != 0)
		{
			break;
		}
		i++;
	}
	return (s + i);
