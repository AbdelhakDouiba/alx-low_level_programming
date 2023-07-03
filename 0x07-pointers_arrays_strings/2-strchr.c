#include "main.h"

/**
*_strchr - locates a character in a string.
*@s: function parameter
*@c: function parameter
*
*Return: NULL if the character doesn't exist, otherwise locates a
*	 character in a string.
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (0);
}
