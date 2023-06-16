#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - it will check the random is : positive, zero or negative
 *@n a variable that will contains a random number
 *
 *Return: 0 if the programm success
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
