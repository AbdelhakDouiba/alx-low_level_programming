int _is_prime(int i, int num);
/**
*is_prime_number - returns 1 if the input integer is a prime
*		   number, otherwise return 0.
*@n: function parameter
*
*Return: 1 if the input integer is a prime number, otherwise 0
*/
int is_prime_number(int n)
{
	return _is_prime(2, n);
}
int _is_prime(int i, int num)
{
	if (num % i != 0)
	{
		return (0);
	}
	else if (i == num)
	{
		return (1);
	}
	_is_prime(++i, num);
}
