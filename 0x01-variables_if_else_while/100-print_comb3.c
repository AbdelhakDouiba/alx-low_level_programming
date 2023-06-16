#include <stdio.h>

/**
 *main - prints all possible different combinations of two digits.
 *
 *Return: 0 if the program success
 */

int main(void)
{
	int value = 48, tmp = 49, val, dvalue, dtmp;

	while (value < 57)
	{
		while (tmp < 58)
		{
			putchar(value);

			putchar(tmp);

			dvalue = putchar(value);
			dtmp = putchar(tmp);

			val = (dvalue * 10) + dtmp;

			if (val != 89)
			{
				putchar(',');

				putchar(' ');
			}
			tmp = 48;

			tmp++;
		}

		value++;
	}

	putchar('\n');

	return (0);
}
