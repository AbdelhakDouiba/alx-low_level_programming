#include <stdio.h>

int _atoi(char *str);

/**
*main - multiplies two numbers.
*@argv: arguments vector
*@argc: arguments count
*
*return: 1 and calculate the resulte if the passed arguments are two
*		0 otherwise
*/

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int mul = _atoi(argv[1]) * _atoi(argv[2]);

		printf("%d\n", mul);
		return (1);
	}
	printf("Error\n");
	return (0);
}
/**
*_atoi -  convert a string to an integer.
*@str: function parameter
*
*Return: 0 if there are no integer, otherwise return the signed integer
*/

int _atoi(char *str)
{
	unsigned int len, moins = 0, j = 0, k = 0, rem = 0, med;

	for (len = 0; str[len] != '\0'; len++)
	{
	}
	while (k < len)
	{
		if (str[k] >= 48 && str[k] <= 57)
		{
			while (j < k)
			{
				if (str[j] == '-')
				{
					moins++;
				}
				j++;
			}
			med = str[k] - '0';
			rem = rem * 10 + med;
			if (str[k + 1] < 48 || str[k + 1] > 57)
			{
				break;
			}
		}
		k++;
	}
	if (moins % 2 != 0)
	{
		rem = rem * (-1);
	}
	return (rem);
}
