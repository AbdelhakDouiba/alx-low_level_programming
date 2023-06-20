#include "main.h"
/**
*_putchar100 - print numbers larger than 99
*
*/

void _putchar100(int a)
{
	_putchar((a / 100) + '0');
	_putchar(((a / 10) % 10) + '0');
	_putchar(((a % 100) % 10) + '0');
}
