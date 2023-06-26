
/**
*_puts - prints a string, followed by a new line, to stdout
*@str: function argument
*
*/

void _puts(char *str)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
