#include "main.h"
/**
*_isalpha - checks for alphabetic character
*@c: funtion parameter, it will contain the ASCII code of the digit or the
*    character
*
*Return: 1 if the input is an alphabet, 0 otherwise
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
