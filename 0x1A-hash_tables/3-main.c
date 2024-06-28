#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;
	hash_node_t *tmp;
	int i;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "cool");
	hash_table_set(ht, "hetairas", "bright");
	hash_table_set(ht, "mentioner", "2030");
	hash_table_set(ht, "heliotropes", "steven");
	hash_table_set(ht, "neurospora", "neuro");
	hash_table_set(ht, "depravement", "st");
	hash_table_set(ht, "serafins", "yt");
	hash_table_set(ht, "stylist", "ss)");
	hash_table_set(ht, "subgenera", "yy");
	for (i = 0; i < 1024; i++)
	{
		if (ht->array[i] != NULL)
		{
			printf("%d\t", i);
			tmp = ht->array[i];
			while (tmp != NULL)
			{
				printf("%s -> ", tmp->key);
				tmp = tmp->next;
			}
			printf("NULL\n");
		}
	}
	return (EXIT_SUCCESS);
}
