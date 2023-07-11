#include "main.h"

/**
*argstostr - concatenates all the arguments of your program.
*@av: function parameter
*@ac: function paramter
*
*Return: a pointer to a new string, or NULL if it fails
*/
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, size = 0;
	char *ret;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			size++;
		}
	}
	ret = malloc(size + ac + 1);
	if (ret == NULL)
	{
		free(ret);
		return (NULL);
	}
	for (i = 0; i < ac ; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ret[k] = av[i][j];
			k++;
		}
		ret[k++] = '\n';
	}
	return (ret);
}
