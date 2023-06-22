#include <stdio.h>
/**
*main - finds and prints the largest prime factor of the number 612852475143,
*       followed by a new line.
*Return: 0 if the program success
*/
int main(void)
{
	long int i = 3, j, k = 0, largest = 1, NUMBER = 612852475143;

	while (i < NUMBER)
	{
		k = 0;
		j = 2;
		while (j < i)
		{
			if (i % j == 0)
			{
				k = 1;
				break;
			}
			j++;
		}
		if (k == 0 || i == 2)
		{
			if (NUMBER % i == 0)
			{
				if (i >= largest)
				{
					largest = i;
				}
			}
		}
		i++;
	}
	printf("%lu\n", largest);
	return (0);
}
