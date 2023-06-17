#include <stdio.h>

/**
 *main - prints all possible combinations of two two-digit numbers.
 *
 *Return: 0 if the program success
 */
int main(void)
{
	int digit_0 = 48, digit_1, digit_2, digit_3;

	while (digit_0 < 58)
	{
		digit_1 = 48;
		while (digit_1 < 57)
		{
			digit_2 = digit_0;
			while (digit_2 < 58)
			{
				digit_3 = digit_1 + 1;
				while (digit_3 < 58)
				{
					putchar(digit_0);
					putchar(digit_1);
					putchar(' ');
					putchar(digit_2);
					putchar(digit_3);
					if (digit_0 != 57 || digit_1 != 56)
					{
						putchar(',');
						putchar(' ');
					}
					digit_3++;
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
