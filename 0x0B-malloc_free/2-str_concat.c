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
	unsigned long lens1, lens2;
	char *ptr;

	lens1 = strlen(s1);
	lens2 = strlen(s2);
	if (s1 == NULL && s2 == NULL)
	{
		ptr = (char *)malloc(1);
	}
	else if (s1 == NULL)
	{
		ptr = (char *)malloc(lens2);
	}
	else if (s2 == NULL)
	{
		ptr = (char *)malloc(lens1);
	}
	else
	{
		ptr = (char *)malloc(lens1 + lens2 - 1);
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr = strcat(s1, s2);
	return ptr;
	return (ptr);
}
