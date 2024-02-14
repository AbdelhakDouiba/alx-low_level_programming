#include "main.h"

/**
*binary_to_uint - converts a binary number to an unsigned int
*@b: string.
*
*Return: the result, 0 if any problem happen
*/

unsigned int binary_to_uint(const char *b)
{
	int i = 0, result = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		result = (result << 1) + (b[i] - '0');
		i++;
	}
	return (result);
}
