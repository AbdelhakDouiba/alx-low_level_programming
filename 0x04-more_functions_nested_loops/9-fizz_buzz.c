#include <stdio.h>
/**
*main - print Fizz if the number multiple of 3, Buzz if the numer is multiple
*	of 5, FizzBuzz if the number multiple of both 3 and 5, otherwise 
*	print the number.
*
*Return: 0 if the program success
*/

int main(void)
{
	int number = 1;

	while (number <= 100)
	{
		if (number % 3 == 0 && number % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (number % 3 == 0)
		{
			printf("Fizz");
		}
		else if (number % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", number); 
		}
		if (number != 100)
		{
			printf(" ");
		}
		number++;
	}
	printf("\n");
	return (0);
}
