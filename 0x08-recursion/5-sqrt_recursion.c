int _is_sqrt(int i, int num);

/**
*_sqrt_recursion - returns the natural square root of a number.
*@n: function parameter
*
*Return: the natural square root of a number.
*/
int _sqrt_recursion(int n)
{
	return (_is_sqrt(n, n));
}

/**
*_is_sqrt - calculate the square root
*@i: function paramter
*@num: function parameter
*
*Return: the square root value, otherwise -1 the number have not any square
*	 root
*/
int _is_sqrt(int i, int num)
{
	if (i < 0)
	{
		return (-1);
	}
	if ((i * i) == num)
	{
		return (i);
	}
	else
	{
		return (_is_sqrt((i - 1), num));
	}
}
