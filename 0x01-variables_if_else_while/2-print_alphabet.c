#include <stdio.h>
/**
 *main - print letters from a to z
 *
 *Return: 0 if the program success
 */
int main(void)
{
char alpha = 97, new_line = '\n';
while (alpha <= 'z')
{
putchar(alpha);
alpha++;
}
putchar(new_line);
return (0);
}
