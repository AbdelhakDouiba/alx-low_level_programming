#include <stdio.h>
/**
 *main - print lower case letters from a to z exept 'e' and 'q'
 *
 *Return: 0 if the program succes
 */
int main(void)
{
	int lower_case = 'a';

	while (lower_case <= 'z')
	{
		if (lower_case != 'q' && lower_case != 'e')
		{
			putchar(lower_case);
		}
		lower_case++;
	}
	putchar('\n');
	return (0);
}
