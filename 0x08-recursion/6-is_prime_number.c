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
	if (n <= 1)
	{
		return (0);
	}
	return (_is_prime(2, n));
}
/**
*_is_prime - returns 1 if the input integer is a prime
*		   number, otherwise return 0.
*@num: function parameter
*@i: function paramter
*
*Return: 1 if the input integer is a prime number, otherwise 0
*/
int _is_prime(int i, int num)
{
	if (i == num)
	{
		return (1);
	}
	else if (num % i == 0)
	{
		return (0);
	}
	return (_is_prime(++i, num));
}
