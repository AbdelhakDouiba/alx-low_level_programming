#include "main.h"
/**
*leet - encodes a string into 1337.
*@str: function parameter
*
*Return: the encodes of the string
*/
char *leet(char *str)
{
	int i = 0, len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	while (i < len)
	{
		if (str[i] == 'a' || str[i] == 'A')
		{
			str[i] = 52;
		}
		if (str[i] == 'e' || str[i] == 'E')
		{
			str[i] = 51;
		}
		if (str[i] == 'o' || str[i] == 'O')
		{
			str[i] = 48;
		}
		if (str[i] == 't' || str[i] == 'T')
		{
			str[i] = 55;
		}
		if (str[i] == 'l' || str[i] == 'L')
		{
			str[i] = 49;
		}
		i++;
	}
	return (str);
}
