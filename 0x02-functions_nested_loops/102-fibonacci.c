#include <stdio.h>

/**
*main - prints the first 50 Fibonacci numbers, starting with 1 and 2,
*        followed by a new line.
*
*Return: 0 if the program success
*/
int main(void)
{
	long int i, tmp, fib_1 = 0, fib_2 = 1;

	for (i = 1 ; i < 50 ; i++)
	{
		tmp = fib_2;
		fib_2 = fib_1 + fib_2;
		fib_1 = tmp;
		printf("%ld", fib_2);
		if (i != 49)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
