#include "main.h"
/**
*cap_string - capitalizes all words of a string.
*@str: function parameter
*
*Return: the capitalized string
*/

char *cap_string(char *str)
{
	int i = 0, len;

	for (len = 0; str[len] != '\0'; len++)
	{
	}

	while (i < len)
	{
		if (str[i] == ' ' || str[i] == ',' || str[i] == ';' ||
			str[i] == '.' || str[i] == '!' || str[i] == '?' ||
			str[i] == '"' || str[i] == '(' || str[i] == ')' ||
			str[i] == '{' || str[i] == '}' || str[i] == '\n' ||
			str[i] == '\t')
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				str[i + 1] -= 32;
			}
		}
		i++;
	}
	i = 0;
	if (str[i] == ' ' || str[i] == ',' || str[i] == ';' ||
		str[i] == '.' || str[i] == '!' || str[i] == '?' ||
		str[i] == '"' || str[i] == '(' || str[i] == ')' ||
		str[i] == '{' || str[i] == '}' || str[i] == '\n' ||
		str[i] == '\t')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
	}
	return (str);
}
