
/**
*_puts - prints a string, followed by a new line, to stdout
*@str: function argument
*
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
	str++;
	}
	_putchar('\n');
}
