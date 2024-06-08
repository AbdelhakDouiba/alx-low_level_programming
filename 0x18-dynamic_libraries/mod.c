#include <stdlib.h>
/**
*mod - return the modulo of two numbers
*@a: first operand
*@b: second operand
*
*Return: the modulo
*/
int mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	exit(-1);
}
