#include "main.h"
/**
*main - prints the minimum number of coins to make change for
*	an amount of money.
*@argv: argument vecotr
*@argc: argument count
*
*Return: if the number of arguments passed to your program is not
*	exactly 1, print Error, followed by a new line, and return 1
*	If the number passed as the argument is negative, print 0, followed
*	by a new line, otherwise print minimum number of coins..
*/
int main(int argc, char *argv[])
{
	int j = 0, number = atoi(argv[1]), minimum;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	while (argv[1][j] != '\0')
	{
		if (argv[1][0] == '-')
		{
			j++;
			continue;
		}
		if (argv[1][j] < 48 || argv[1][j] > 57)
		{
			printf("Error\n");
			return (1);
		}
		j++;
	}
	if (number <= 0)
	{
		printf("0\n");
		return (0);
	}
	minimum = min_centes(number);
	printf("%d\n", minimum);
	return (0);
}
/**
*min_centes - return minimum number of coins
*@n: function paramtetr
*
*Return: minimum number of coins
*/
int min_centes(int n)
{
	int min, i = 0, rem;
	int coins[5] = { 25, 10, 5, 2, 1};

	while (i < 5)
	{
		rem = n % coins[i];
		if (rem == 0)
		{
			min = (n / coins[i]);
			return (min);
		}
		else if (n / coins[i] >= 1)
		{
			min = (n / coins[i]);
			min += min_centes(rem);
			return (min);
		}
		i++;
	}
	return (0);
}
