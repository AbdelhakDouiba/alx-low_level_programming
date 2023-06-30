#include "main.h"
/**
*rot13 - encodes a string using rot13
*@str: function parameter
*
*Return: the encodes of a string
*/
char *rot13(char *str)
{
	int i = 0, j;
	char re[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char wi[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";


	while (str[i] != '\0')
	{
		j = 0;
		while (re[j] != '\0')
		{
			if (str[i] == re[j])
			{
				str[i] = wi[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
