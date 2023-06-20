#include "main.h"
/**
 *print_alphabet - prints the alphabet in lower case followed by a new line
 *
 */
void print_alphabet(void)
{
	int alpha = 97;

	while (alpha <= 122)
	{
		_putchar(alpha);

		alpha++;
	}
	_putchar('\n');
}
