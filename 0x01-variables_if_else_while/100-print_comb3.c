#include <stdio.h>

/**
 *main - prints all possible different combinations of two digits.
 *
 *Return: 0 if the program success
 */

int main(void)
{
	int value = 48, tmp;

	while (value < 57)
	{
		tmp = value + 1;
		while (tmp < 58)
		{
			putchar(value);

			putchar(tmp);

			if (value != 56)
			{
				putchar(',');

				putchar(' ');
			}

			tmp++;
		}

		value++;
	}

	putchar('\n');

	return (0);
}
