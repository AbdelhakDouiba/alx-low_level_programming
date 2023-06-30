#include "main.h"
/**
*leet - encodes a string into 1337.
*@str: function parameter
*
*Return: the encodes of the string
*/
char *leet(char *str)
{
	int i = 0, j = 0;
	char r[] = "aAeEoOtTlL", w[] = "4433007711";

	while (str[i] != '\0')
	{
		j = 0;
		while(r[j] != '\0')
		{
			if (str[i] == r[j])
			{
				str[i] = w[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
