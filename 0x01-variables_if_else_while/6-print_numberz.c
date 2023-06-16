#include <stdio.h>

/**
 *main - prints all single digit numbers of base 10 starting from 0
 *
 *Return: 0 if the program success
 */

int main(void)
{
	int digit = 48;

	while (digit < 58)
	{
		putchar(digit);
		digit++;
	}

	putchar('\n');
	return (0);
}
