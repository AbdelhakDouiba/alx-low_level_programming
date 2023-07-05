#include "main.h"
/**
*_strlen_recursion - returns the length of a string.
*@s: function parameter
*
*Return: the length of a string
*/
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	else
	{
		return (0);
	}
}
