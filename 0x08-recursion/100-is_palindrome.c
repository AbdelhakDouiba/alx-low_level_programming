int is_p(char *a, int i, int j);

/**
*is_palindrome - returns 1 if a string is a palindrome and 0 if not.
*@s: function parameter
*
*Return: 1 if a string is a palindrome and 0 if not.
*/
int is_palindrome(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
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
	if (a[i] != a[j])
	{
		return (0);
	}
	else if (i >= j)
	{
		return (1);
	}
	return (is_p(a, i - 1, j + 1));
}
