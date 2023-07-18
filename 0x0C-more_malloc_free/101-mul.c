#include "main.h"

/**
*main- multiplies two positive numbers.
*@arc: arguments count
*@argv: arguments vector
*
*Return: 0 if the program success
*/
int main(int argc, char *argv[])
{
	int len1 = 0, len2 = 0;
	int i, j, di1,di2;
	int *mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	while (argv[1][len1] != '\0')
	{
		if (argv[1][len1] > 57 || argv[1][len1] < 48)
		{
			printf("Error\n");
			exit(98);
		}
		len1++;
	}
	while(argv[2][len2] != '\0')
	{
		if (argv[1][len2] > 57 || argv[1][len2] < 48)
		{
			printf("Error\n");
			exit(98);
		}
		len2++;
	}
	mul = calloc(len1+len2, sizeof(int));
	for( i = len1 - 1; i >= 0; i--)
	{
		for( j = len2 - 1; j >= 0; j--)
		{
			di1 = argv[1][i] - '0';
			di2 = argv[2][j] - '0';
			mul[i + j + 1] += di1 * di2;
		}
	}
	
	return 0;
}
