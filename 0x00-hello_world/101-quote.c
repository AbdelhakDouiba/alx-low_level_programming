#include <unistd.h>
/**
 *main - Print to the standard error the followin text : and that piece of art
 *             is useful" - Dora Korpar, 2015-10-19
 *
 *Return: 1 if the program succes
 */
int main(void)
{
write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 59);
return (1);
}
