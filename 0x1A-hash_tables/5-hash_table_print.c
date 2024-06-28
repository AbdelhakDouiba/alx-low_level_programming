#include "hash_tables.h"

/**
*hash_table_print - prints a hash table.
*@ht: the target hash table
*
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i;
	int flag = 0;

	if (ht != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			tmp = ht->array[i];
			if (flag == 1 && tmp != NULL)
				printf(", ");
			while (tmp != NULL)
			{
				printf("'%s': '%s'", tmp->key, tmp->value);
				if (tmp->next != NULL)
					printf(", ");
				tmp = tmp->next;
				flag = 1;
			}
		}
		printf("}\n");
	}
}
