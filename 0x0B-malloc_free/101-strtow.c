#include "main.h"
/**
*strtow - splits a string into words.
*@str: function parameter
*
*Return: a pointer to an array of strings (words), NULL If your function 
*	fails and if str == NULL or str == ""
*/
char **strtow(char *str)
{
	int i, size = 0, j = 0, spsize = 0;
	char **ret;

	if (str == NULL )
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		size++;
	}
	for (i = 0; i < size; i++)
	{
		if (str[i] == ' ')
			continue;
		spsize++;
	}
	ret = malloc(spsize * sizeof(char *));
	if (ret == NULL)
	{
		free(ret);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		if(str[i] != ' ')
		{
			ret[j][i] = str[i];
		}
		else
		{
			ret[j][i] ='\0';
			j++;
		}
	}
	j++;
	ret[j] = NULL;
	return (ret);
}
