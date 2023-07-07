#include "main.h"

/**
*main - adds positive numbers.
*@argv: arguments vector
*@argc: arguments count
*
*Return: If no number is passed to the program, print 0, followed by a new
*	line. If one of the number contains symbols that are not digits, print
*	Error, followed by a new line, and return 1
*/
int main(int argc, char *argv[])
{
	int i = 1, j, num, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		num = atoi(argv[i]);
		j = 0;
		while ( argv[i][j] != '\0')
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += num;
		i++;
	}
	printf("%d\n", sum);
	return EXIT_SUCCESS;
}
