int is_p(char *a, char *b);

/**
*is_palindrome - returns 1 if a string is a palindrome and 0 if not.
*s: function parameter
*
*Return: 1 if a string is a palindrome and 0 if not.
*/
int is_palindrome(char *s)
{
	int len = 0, i = 0;
	char *str;

	while(s[len] != '\0')
	{
		len++;
	}
	while((len-1) >= 0)
	{
		str[i] = s[len];
		len--;
		i++;
	}
	return is_p(str, s);
}
int is_p(char *a, char *b)
{
	if( *a != *b)
	{
		return 0;
	}
	else if (*a != '\0' && *b != '\0' && *a == *b)
	{
		a++;
		b++;
		is_p(a, b);
	}
	return 1;
}
