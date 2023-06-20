#include <stdio.h>
#include "main.h"

/**
*print_to_98 - prints all natural numbers from n to 98
*@number: function parameter, contains an integer value
*/
void print_to_98(int number)
{
	if (number < 98)
	{
		while (number <= 98)
		{
			printf("%d", number);
			if (number != 98)
			{
				printf(", ");
			}
			else
			{
				printf("\n");
			}
			number++;
		}
	}
	else if (number > 98)
	{
		while (number >= 98)
		{
			printf("%d", number);
			if (number != 98)
			{
				printf(", ");
			}
			else
			{
				printf("\n");
			}
			number--;
		}
	}
	else
	{
		printf("%d\n", number);
	}
}
