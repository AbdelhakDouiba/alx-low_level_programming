#include "main.h"
/**
*more_numbers - prints 10 times the numbers, from 0 to 14, followed by a new
*               line.
*/
void more_numbers(void)
{
	int digit = 0, i = 0;

	while (i < 10)
	{
		digit = 0;
		while (digit <= 14)
		{
			if (digit >= 10)
			{
				_putchar((digit / 10) + '0');
				_putchar((digit % 10) + '0');
			}
			else
			{
				_putchar(digit + '0');
			}
			digit++;
		}
		i++;
		_putchar('\n');
	}
}
