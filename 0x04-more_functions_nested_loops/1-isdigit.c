#include "main.h"
/**
*_isdigit - checks for a digit (0 through 9).
*@c: function parameter, contain an integer value
*
*Return: 1 if it is a digit, 0 otherwise
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
