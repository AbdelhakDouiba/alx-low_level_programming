#include "main.h"
/**
*string_toupper - changes all lowercase letters of a string to uppercase.
*@str: function parameter
*
*Return: adress of the string
*/
char *string_toupper(char *str)
{
	int i = 0, len;

	for (len = 0; str[len] != '\0'; len++)
	{
	}
	while (i < len)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
