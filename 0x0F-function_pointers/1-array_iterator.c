#include "function_pointers.h"

/**
*array_iterator -  executes a function given as a parameter on each
*		   element of an array.
*@array: function parameter
*@size: function parameter
*@action: function parameter
*
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action != NULL && array != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
