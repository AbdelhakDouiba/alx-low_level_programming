#include <stdio.h>
/**
*main - prints the number of arguments passed into it
*	followed by a new line.
*@argv: arguments vector
*@argc: arguments count
*
*Return: 0 if the program success
*/
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
