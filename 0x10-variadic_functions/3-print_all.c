#include "variadic_functions.h"

/**
*print_all - prints anything.
*@format: function parameter
*
*/

void print_all(const char * const format, ...)
{
	int count = 0, i = 0, flag;
	char *ptr;
	va_list var;

	if (format != NULL)
	{count = get_count(format);
		va_start(var, format);
		while (format[i] != '\0' && count != 0)
		{flag = 1;
			switch (format[i])
			{
				case 'i':
					printf("%d", va_arg(var, int));
					break;
				case 'f':
					printf("%f", va_arg(var, double));
					break;
				case 'c':
					printf("%c", va_arg(var, int));
					break;
				case 's':
					ptr = va_arg(var, char *);
					if (ptr == NULL)
					{
						printf("(nil)");
						break;
					}
					printf("%s", ptr);
					break;
				default:
					flag = 0;
					break;
			}
			print_separator(&count, flag);
			i++;
		}
	}
	printf("\n");
	va_end(var);
}

/**
*get_count - return the number of arguments
*@form:function parameter
*
*Return: the number of argument
*/
int get_count(const char * const form)
{
	int i = 0, count = 0;
	bool b;

	while (form[i] != '\0')
	{
		b = (form[i] == 'i' || form[i] == 'f' || form[i] == 's' ||
			form[i] == 'c');
		switch (b)
		{
			case (true):
				count++;
		}
		i++;
	}
	return (count);
}

/**
*print_separator - print the separator ", "
*@a: function parameter
*@b: function parameter
*
*/
void print_separator(int *a, int b)
{
	bool z = ((*a - 1) != 0 && b == 1);

	switch (z)
	{
		case (true):
			printf(", ");
			*a = *a - 1;
	}
}
