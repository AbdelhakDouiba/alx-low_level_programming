#include "main.h"
/**
*_putchar10 - print numbers between 9 and 100
*
*/
void _putchar10(int a)
{
	_putchar((a / 10) + '0');
	_putchar((a % 10) + '0');
}
