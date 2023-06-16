#include <stdio.h>
/**
 *main - print letter from a to z (lower case) and from A to Z (upper case)
 *
 *Return: 0 if the program success
 */
int main(void)
{
char lower_case = 'a', upper_case = 'A', new_line = '\n';
while (lower_case <= 'z')
{
putchar(lower_case);
lower_case++;
}
while (upper_case <= 'Z')
{
putchar(upper_case);
upper_case++;
}
putchar(new_line);
return (0);
}
