#include "main.h"
/**
*_strcmp - compares two strings
*@s1: function parameter
*@s2: function parameter
*
*Return: 0 if the numbers are equal, negative or positive number otherwise
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0, len1, len2;

	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
	}
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
	}
	if(len1 == len2)
	{
		while (i < len1)
		{
			if (s1[i] > s2[i])
			{
				return (15);
			}
			else if (s1[i] < s2[i])
			{
				return (-15);
			}
			i++;
		}
		return (0);
	}
	else if (len1 > len2)
	{
		return (15);
	}
	else
	{
		return (-15);
	}
}
