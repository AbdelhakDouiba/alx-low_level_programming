#include "variadic_functions.h"

/**
*sum_them_all - returns the sum of all its parameters.
*@n: function parameter
*
*Return: the sum of all its parameters
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list var;

	if (n == 0)
	{
		return (0);
	}
	va_start(var, n);
	while (i < n)
	{
		sum += va_arg(var, int);
		i++;
	}
	va_end(var);
	return (sum);
}
