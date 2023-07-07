#include "main.h"

/**
*_strspn - gets the length of a prefix substring.
*@s: function parameter
*@accept: function parameter
*
*Return: the length of a prefix substring.
*/
unsigned int _strspn(char *s, char *accept)
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
		if (count == 0)
		{
			break;
		}
		i++;
	}
	return (i);
}
