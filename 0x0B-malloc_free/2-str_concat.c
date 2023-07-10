#include "main.h"

/**
*str_concat - concatenates two strings.
*@s1: function paramter
*@s2: function parameter
*
*Return: pointer should point to a newly allocated space in memory which
*	 contains the contents of s1, followed by the contents of s2, and
*	 null terminated, NULL on failure
*/
char *str_concat(char *s1, char *s2)
{
	unsigned long i, j, lens1, lens2;
	char *ptr;

	ptr = (char *)malloc(sizeof(s1) + sizeof(s2) - sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (lens1 = 0; s1[lens1] != '\0'; lens1++)
	{
	}
	for (lens2 = 0; s2[lens2] != '\0'; lens2++)
	{
	}
	for (i = 0; i < lens1; i++)
	{
		ptr[i] = s1[i];
	}
	i = lens1;
	for (j = 0; j <= lens2; j++)
	{
		ptr[i++] = s2[j];
	}
	return (ptr);
}
