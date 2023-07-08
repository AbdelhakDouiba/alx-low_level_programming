#include <stdio.h>

/**
 *main - prints the first 98 Fibonacci numbers, starting with 1 and 2,
 *       followed by a new line.
 *
 *Return: 0 if the program success
 */
int main(void)
{
	unsigned long int i, tmp, fib_1 = 0, fib_2 = 1;

	for (i = 1; i <= 98; i++)
	{
		tmp = fib_2;
		fib_2 = fib_1 + fib_2;
		fib_1 = tmp;
		printf("%lu", fib_2);
		if (i != 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
