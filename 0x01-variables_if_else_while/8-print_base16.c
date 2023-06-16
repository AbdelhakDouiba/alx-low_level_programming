#include <stdio.h>

/**
 *main - prints all the numbers of base 16 in lowercase
 *
 *Return: 0 if the program success
 */

int main(void)
{
	int number = 48, lower_case = 97;

	while (number < 58)
	{
		putchar(number);
		number++;
	}

	while (lower_case <= 102)
	{
		putchar(lower_case);
		lower_case++;
	}

	putchar('\n');

	return (0);

}
