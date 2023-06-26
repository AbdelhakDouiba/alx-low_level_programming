
/**
*swap_int - swaps the values of two integers.
*@a: function argument
*@b: function argument
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
