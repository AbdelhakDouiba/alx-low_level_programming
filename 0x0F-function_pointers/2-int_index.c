#include "function_pointers.h"

/**
*int_index - searches for an integer.
*@array: function parameter
*@size: function parameter
*@cmp: function parameter
*
*Return: the index of the first element for which the cmp function
*	 does not return 0.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, ret = -1;

	if (array != NULL && cmp != NULL && size > 0)
	{
		while (i < size)
		{
			if (cmp(array[i]) != 0)
			{
				ret = i;
				break;
			}
			i++;
		}
	}
	return (ret);
}
