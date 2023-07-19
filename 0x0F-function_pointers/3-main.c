#include "3-calc.h"

/**
*main- calculator
*@argc: ...
*@argv: ...
*
*Return: ...
*/
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*cal)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (b == 0 && (strcmp(argv[2], "%") == 0 || strcmp(argv[2], "/") == 0))
	{
		printf("Error\n");
		exit(100);
	}
	cal = get_op_func(argv[2]);
	if (!cal)
	{
		printf("Error\n");
		exit(99);
	}
	result = cal(a, b);
	printf("%d\n", result);
	return (0);
}
