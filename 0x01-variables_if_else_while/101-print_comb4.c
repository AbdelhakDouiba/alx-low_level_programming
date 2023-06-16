#include <stdio.h>

/**
 *main - prints all possible different combinations of three digits.
 *
 *Return: 0 if the program success
 */

int main(void)
{
	int digit_0 = 48, digit_1, digit_2;

	while (digit_0 < 56)
	{
		digit_1 = digit_0 + 1;

		while (digit_1 < 57)
		{
			digit_2 = digit_1 + 1;

			while (digit_2 < 58)
			{
				putchar(digit_0);
				putchar(digit_1);
				putchar(digit_2);
				if (digit_0 != 55)
				{
					putchar(',');
					putchar(' ');
				}
				digit_2++;
			}
			digit_1++;
		}
		digit_0++;
	}
	putchar('\n');
	return (0);
}
