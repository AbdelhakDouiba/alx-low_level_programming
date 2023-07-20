#include "variadic_functions.h"

/**
*print_strings - prints strings, followed by a new line.
*@separator: function parameter
*@n: function parameter
*
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0, k = n;
	char *ptr;
	va_list var;

	va_start(var, n);
	while (i < k)
	{
		ptr = va_arg(var, char *);
		if (ptr == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", ptr);
		}
		if (separator != NULL && i < (k - 1))
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(var);
}
