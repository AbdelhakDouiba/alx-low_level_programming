#include "hash_tables.h"

/**
*hash_table_delete - deletes a hash table.
*@ht: the target hash table.
*
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *var;
	unsigned long int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		ht->array[i] = NULL;
		while (tmp != NULL)
		{
			var = tmp;
			tmp = tmp->next;
			free(var->key);
			free(var->value);
			free(var);
		}
	}
	free(ht->array);
	free(ht);
}
