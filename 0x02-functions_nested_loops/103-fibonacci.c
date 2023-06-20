#include <stdio.h>
/**
*main -finds and prints the sum of the even-valued terms, followed by a new
*      line
*Return: 0 if the program success
*/
int main(void)
{
	long int i, tmp, fib_1 = 0, fib_2 = 1, sum = 0;

	for (i = 1 ; i <= 50 ; i++)
	{
		tmp = fib_2;
		fib_2 = fib_1 + fib_2;
		fib_1 = tmp;
		if (fib_2 < 4000000)
		{
			sum = sum + fib_2;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
