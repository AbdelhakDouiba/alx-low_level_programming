#include "main.h"

/**
*_strpbrk - searches a string for any of a set of bytes.
*@s: function parameter
*@accept: function parameter
*
*Return: string for any of a set of bytes
*/
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0, j;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			j++;
		}
		i++;
	}
	return ('\0');
}
