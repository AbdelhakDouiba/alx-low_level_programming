#include "main.h"
/**
*print_most_numbers - prints the numbers, from 0 to 9, followed by a new line.
*
*/
void print_most_numbers(void)
{
	int digit = 48;

	while (digit < 58)
	{
		if (digit == 50 || digit == 52)
		{
			digit++;
			continue;
		}
		_putchar(digit);
		digit++;
	}
	_putchar('\n');
}
