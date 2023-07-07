#include "main.h"

/**
*main - multiplies two numbers.
*@argv: arguments vector
*@argc: arguments count
*
*Return: 1 and calculate the resulte if the passed arguments are two
*		0 otherwise
*/

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int mul = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", mul);
		return (0);
	}
	printf("Error\n");
	return (1);
}
