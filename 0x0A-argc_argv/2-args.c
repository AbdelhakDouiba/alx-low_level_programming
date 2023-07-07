#include <stdio.h>
/**
*main- prints its name, followed by a new line.
*@argv: arguments vector
*@argc: arguments count
*
*Return: 0 if the program success
*/
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
