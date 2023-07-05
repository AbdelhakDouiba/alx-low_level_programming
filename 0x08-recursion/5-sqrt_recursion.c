
/**
*_sqrt_recursion - returns the natural square root of a number.
*@n: function parameter
*
*Return: the natural square root of a number.
*/
int _sqrt_recursion(int n)
{
	int i = n;
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		if((i * i) == n)
		{
		return (i);
		}
		else
		{
			return (_sqrt_recursion(n-1));
		}
		return (-1);
	}
}

