#include "main.h"

/**
*string_nconcat - concatenates two strings.
*@s1: a string
*@s2: a string
*@n: an integer
*
*Return: ointer shall point to a newly allocated space in memory, which
*	 contains s1, followed by the first n bytes of s2, and null
*	 terminated, If the function fails, it should return NULL.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int f = n, lens1, lens2, i, j;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}
	lens1 =  (unsigned int)_strlen(s1);
	lens2 = (unsigned int)_strlen(s2);
	if (f > lens2)
	{
		f = lens2;
	}
	ptr = (char *)malloc((lens1 + f + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < lens1; i++)
	{
		ptr[i] = s1[i];
	}
	i = lens1;
	for (j = 0; j < f; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[lens1 + f] = '\0';
	return (ptr);
}

/**
*_strlen - calculate string lenth
*@str: string
*
*Return: string lenth
*/
int _strlen(char *str)
{
	int l = 0;

	for (l = 0; str[l] != '\0'; l++)
	{
	}
	return (l);
}
