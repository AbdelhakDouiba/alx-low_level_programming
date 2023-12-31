#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * Return: 0 if the program succeeds.
 */

int main(void)
{
	unsigned long i = 3, j, k = 0, largest = 1, NUMBER = 612852475143;

	while (i * i <= NUMBER)
	{
		k = 0;
		j = 2;
		while (j * j <= i)
		{
			if (i % j == 0)
			{
				k = 1;
				break;
			}
			j++;

		}
		if (k == 0)
		{
			if (NUMBER % i == 0)
			{
				largest = i;
				while (NUMBER % i == 0)
				NUMBER = NUMBER / i;
			}
		}
		i += 2;

	}
	if (largest < NUMBER)
		largest = NUMBER;

	printf("%lu\n", largest);
	return (0);
}
