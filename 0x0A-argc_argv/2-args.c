#include <stdio.h>
/**
*main- prints all arguments it receives, followed by a new line.
*@argv: arguments vector.
*@argc: arguments count.
*
*Return: 0 if the program success
*/
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i++]);
	}
	return (0);
}
