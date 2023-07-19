#include "function_pointers.h"

/**
*main - .....
*@argc: ....
*@argv: ...
*
*Return: 0
*/
int main(int argc, char *argv[])
{
	int i = 0, a;
	char *var;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	a = atoi(argv[1]);
	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}
	var = (char *)main;
	for (i; i < (a - 1); i++)
	{
		printf("%02hhx ", var[i]);
	}
	printf("%02hhx\n", var[a - 1]);
	return (0);
}
