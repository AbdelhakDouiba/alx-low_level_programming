#include "main.h"
/**
*_isupper -  checks for uppercase character
*@c: function parameter, contain an integer value
*
*Return: 1 if the caracter is uppercase, 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
