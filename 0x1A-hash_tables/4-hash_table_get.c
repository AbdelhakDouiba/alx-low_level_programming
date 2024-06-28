#include "hash_tables.h"

/**
*hash_table_get - retrieves a value associated with a key.
*@ht: A pointer to the hash table
*@key: the key of the value
*
*Return: the value associated with the element, or NULL if key
*	 couldn’t be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int i;

	if (ht == NULL || key == NULL || _strlen(key) == 0)
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[i];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	if (tmp == NULL)
		return (NULL);
	return (tmp->value);
}
