#include "function_pointers.h"

/**
*print_name - prints a name
*@name: function parameter
*@f: funcyion parameter, pointer to a function
*
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
