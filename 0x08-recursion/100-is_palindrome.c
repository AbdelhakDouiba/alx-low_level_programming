
/**
*is_palindrome - returns 1 if a string is a palindrome and 0 if not.
*s: function parameter
*
*Return: 1 if a string is a palindrome and 0 if not.
*/
int is_palindrome(char *s)
{
	char *str;

	while(s != '\0')
	{
		s++;
		len++;
	}
	while(len >= 0)
	{
		str[len] = s[len];
		len--;
	}
	return is_p(str, s);
}
int is_p(char *a, char *b)
{
	if( *a != *b)
	{
		return 0;
	}
	else if (a != '\0' && b != '\0' && a == b)
	{
		a++;
		b++;
		is_p(a, b);
	}
	return 1;
}
