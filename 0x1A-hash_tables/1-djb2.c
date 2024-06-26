#include "hash_tables.h"

/**
*hash_djb2 - the djb2 algorithm.
*@str: input string
*
*Return: The hash code for input
*/

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c;
	return (hash);
}
