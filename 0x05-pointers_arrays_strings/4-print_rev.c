#include "main.h"

/**
*print_rev - prints a string, in reverse, followed by a new line.
*@s: function parameter
*/

void print_rev(char *s)
{
	int i = 0, j, tmp;

	j = _strlen(s) + 1;
	while (i < j)
	{
		tmp = *s[i];
		*s[i] = *s[j];
		*s[j] = tmp;
		i++;
		j--;
	}
	_puts(*s);
}

