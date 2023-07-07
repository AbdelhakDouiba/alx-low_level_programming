#include "main.h"
/**
*_islower - checks for lowercase character
*@c: function parameter it will contains the ASCII code of the character
*
*Return: 1 if the character is lowercase, 0 if it is not.
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
