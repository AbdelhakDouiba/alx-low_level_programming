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
	unsigned long i, j, lens1 = 0, lens2 = 0;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	lens1 = strlen(s1);
	lens2 = strlen(s2);
	ptr = (char *)malloc(lens1 + lens2 + 1);
	if (ptr == NULL)
	{
		return (NULL);
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
