#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main -generates random valid passwords for the program 101-crackme.
*
*/
int main(void)
{
	int i, n;
	char password[100];

	srand(time(NULL));

	for(i = 0; i < 100; i++)
	{
		n = rand() % 93 + 33;
		password[i] = (char)n;
		printf("%s\n", password);
	}
	return 0;
}
