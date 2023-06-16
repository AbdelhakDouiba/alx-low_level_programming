#include <stdio.h>

/**
 *main - prints the lowercase alphabet in reverse
 *
 *Return: 0 if the program success
 */

int main(void)
{
	char lower_case = 'z';

	while (lower_case >= 'a')
	{
		putchar(lower_case);
		lower_case--;
	}

	putchar('\n');
	return (0);
}
