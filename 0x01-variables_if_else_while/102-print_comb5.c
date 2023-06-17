#include <stdio.h>

/**
 *main - prints all possible combinations of two two-digit numbers.
 *
 *Return: 0 if the program success
 */
int main(void)
{
	int part_1 = 0, part_2;

	while (part_1 < 99)
	{
		part_2 = part_1 + 1;
		while (part_2 < 100)
		{
			putchar((part_1 / 10) + '0');
			putchar((part_1 % 10) + '0');
			putchar(' ');
			putchar((part_2 / 10) + '0');
			putchar((part_2 % 10) + '0');

			if (part_1 != 98)
			{
				putchar(',');
				putchar(' ');
			}
			part_2++;
		}
		part_1++;
	}
	putchar('\n');
	return (0);
}
