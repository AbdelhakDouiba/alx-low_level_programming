#include "variadic_functions.h"

/**
*print_numbers - prints numbers, followed by a new line.
*@separator: function parameter
*@n: function parameter
*
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0, k = n;
	va_list var;

	va_start(var, n);
	while (i < k)
	{
		printf("%d", va_arg(var, int));
		if (separator != NULL && i != (k - 1))
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(var);
}
