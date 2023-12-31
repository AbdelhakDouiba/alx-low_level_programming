#include "main.h"

/**
*_strdup -  a pointer to a newly allocated space in memory, which
*	    contains  a  copy of the string given as a parameter.
*@str: function paramter
*
*Return:  a pointer to a new string which is a duplicate of the string str
*	   NULL if insufficient memory was available.
*/
char *_strdup(char *str)
{
	unsigned long int i, elements;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	for (elements = 0; str[elements] != '\0'; elements++)
	{
	}
	p = (char *)malloc((elements + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < elements; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
