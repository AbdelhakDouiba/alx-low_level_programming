int is_p(char *a, int i, int j);

/**
*_strlen - calculate the length of a string
*@str: function parameter
*
*Return: the string length
*/
int _strlen(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen(str + 1));
	}
}
/**
*is_palindrome - returns 1 if a string is a palindrome and 0 if not.
*@s: function parameter
*
*Return: 1 if a string is a palindrome and 0 if not.
*/
int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (is_p(s, len - 1, 0));
}

/**
*is_p - returns 1 if a string is a palindrome and 0 if not
*@a: function parameter
*@i: function parameter
*@j: function parameter
*
*Return: 1 if a string is a palindrome and 0 if not.
*/
int is_p(char *a, int i, int  j)
{
	if (i >= j)
	{
		return (1);
	}
	else if (a[i] != a[j])
	{
		return (0);
	}
	return (is_p(a, i - 1, j + 1));
}
