#include "main.h"
/**
*print_last_digit - prints the last digit of a number
*@number: function parameter, contain a number
*
*Return: the last digit
*/
int print_last_digit(int number)
{
	int last_digit;

	if (number >= 0)
	{
		last_digit = number % 10;
		_putchar(last_digit + '0');
		return (last_digit);
	}
	else
	{
		last_digit = (number % 10) * (-1);
		_putchar(last_digit + '0');
		return (last_digit);
	}
}
