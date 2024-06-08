#include "main.h"
/**
*_abs - computes the absolute value of an integer
*@number: function parameter, contain an integer
*
*Return: the absolute value
*/
int _abs(int number)
{
	if (number >= 0)
	{
		return (number);
	}
	else
	{
		return (-number);
	}
}
