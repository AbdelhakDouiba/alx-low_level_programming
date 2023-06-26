#include "main.h"

/**
*print_rev - prints a string, in reverse, followed by a new line.
*@s: function parameter
*/

void print_rev(char *s)
{
	int j = 0;

	while ( *s != '\0')
	{
		j++;
		s++;
	}
	while (j >= 0)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}

