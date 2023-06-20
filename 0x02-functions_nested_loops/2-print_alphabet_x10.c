#include "main.h"
/**
*print_alphabet_x10 - 10 times the alphabet, in lowercase, followed by a new
*                     line
*/
void print_alphabet_x10(void)
{
	int i = 0, alpha;

	while (i < 10)
	{
		alpha = 97;
		while (alpha <= 122)
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		i++;
	}
}
