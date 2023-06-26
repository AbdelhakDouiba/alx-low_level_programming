#include "main.h"

/**
*rev_string - reverses a string.
*@s: function argument
*
*/
void rev_string(char *s)
{
	int lens = 0, i = 0, tmp;

	while (*s != '\0')
	{
		lens++;
		s++;
	}

	while (lens > i)
	{
		tmp = s[i];
		s[i] = s[lens];
		s[lens] = tmp;
		lens--;
		i++;
	}
}
