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
	p = (char *)malloc(sizeof(str));
	elements = sizeof(str)/sizeof(str[0]);
	for (i = 0; i < elements; i++)
	{
		p[i] = str[i];
	}
	if (p == NULL)
	{
		return (NULL);
	}
	return (p);
}
