
/**
*_strlen - returns the length of a string.
*@s: function argument
*
*Return: the lenth of a string
*/

int _strlen(char *s)
{
	int strilen = 1, i = 0;

	while (s[i] != '\0')
	{
		strilen++;
		i++;
	}

	return (strilen);
}
