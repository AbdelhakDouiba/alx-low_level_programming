#include "main.h"

/**
*wildcmp - compares two strings and returns 1 if the strings
*	can be considered identical, otherwise return 0.
*@s1: function parameter
*@s2: function parameter
*
*Return: the length of a string
*/
int wildcmp(char *s1, char *s2)
{
	return (wild(s1, s2, 0, 0));
}
/**
*wild - check the astrick
*@a: parameter
*@b: parameter
*@as: parameter
*@bs: paramter
*
*Return: 1 or 0
*/
int wild(char *a, char *b, int as, int bs)
{
	int o = _strlen1(b) - 1;

	if (b[bs] == '\0' && a[as] == '\0')
	{
		return (1);
	}

	if (b[bs] == '*')
	{
		bs++;
		as = ascheck(a, b[bs + 1], as, o);
		return (wild(a, b, as, bs));
	}

	if (a[as] == '\0')
	{
		return (0);
	}

	if (b[bs - 1] == '*')
	{
		if (a[as] == b[bs])
		{
			return (wild(a, b, as + 1, bs + 1));
		}

		return (wild(a, b, as + 1, bs));
	}

	if (b[bs] != a[as] || b[bs] == '\0' || a[as] == '\0')
	{
		return (0);
	}

	return (wild(a, b, as + 1, bs + 1));

}

/**
 *_strlen1 - returns the length of a string.
 *@s: function parameter
 *
 *Return: the length of a string
 */
int _strlen1(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (1 + _strlen1(s));
	}
	else
	{
		return (0);
	}
}

/**
*ascheck - return the index of the character
*@s: paramter
*@b: paramter
*@k: paramter
*@len: paramter
*Return: the index
*/
int ascheck(char *s, char b, int k, int len)
{
	if (k <= len)
	{
		if (s[len] == b)
		{
			return (len);
		}
		else
		{
			return (ascheck(s, b, k, len - 1));
		}
	}
	else
	{
		return (k);
	}
}
