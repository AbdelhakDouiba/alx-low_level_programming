#include "main.h"
/**
*print_sign - prints the sign of a number
*@number: function parameter, contain an integer value
*
*Return: 1 if the number is greater than 0, 0 if the number is zero and -1 if
*        the number is less than 0
*/
int print_sign(int number)
{
	if (number > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (number == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
