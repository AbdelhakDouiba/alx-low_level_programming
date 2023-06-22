nclude <stdio.h>

#define NUMBER 612852475143

/**
 
main - finds and prints the largest prime factor of the number 612852475143,
followed by a new line.
Return: 0 if the program succeeds.
*/
int main(void)
{
    unsigned long i = 3, j, k = 0, largest = 1;

    while (i * i <= NUMBER)
    {
        k = 0;
        j = 2;
        while (j * j <= i)
        {
            if (i % j == 0)
            {
                k = 1;
                break;
            }
            j++;
        }
        if (k == 0)
        {
            if (NUMBER % i == 0)
            {
                largest = i;
                while (NUMBER % i == 0)
                    NUMBER /= i;
            }
        }
        i += 2;
    }
    if (NUMBER > largest)
        largest = NUMBER;

    printf("%lu\n", largest);
    return (0);
}
