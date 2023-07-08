#include <stdio.h>

/**
 *main - prints the first 98 Fibonacci numbers, starting with 1 and 2,
 *       followed by a new line.
 *
 *Return: 0 if the program success
 */
int main(void)
{
	unsigned long int i, tmp, fib_1 = 0, fib_2 = 1, a, a1, b, b1, tem, tem1;

	for (i = 1; i < 93; i++)
	{
		tmp = fib_2;
		fib_2 = fib_1 + fib_2;
		fib_1 = tmp;
		printf("%lu", fib_2);
		printf(", ");
	}
	a = fib_1 / 1000000000;
	a1 = fib_1 % 1000000000;
	b = fib_2 / 1000000000;
	b1 = fib_2 % 1000000000;
	for (i; i <= 98; i++)
	{
		tem = b;
		tem1 = b1;
		b = a + b;
		b1 = a1 + b1;
		a = tem;
		a1 = tem1;
		printf("%lu", b);
		printf("%lu", b1);
		if (i != 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
