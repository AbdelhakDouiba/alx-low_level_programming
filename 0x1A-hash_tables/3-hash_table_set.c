#include "hash_tables.h"

/**
*hash_table_set - adds an element to the hash table.
*@ht: pointer to the hashtable
*@key: the input key
*@value: the value to be added
*
*Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || _strlen(key) == 0 || value == NULL ||
	    _strlen(value) == 0)
		return (0);
	node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = _strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = _strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (0);
	}
	node->next = NULL;
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = node;
	}
	else
	{
		node->next = ht->array[index];
		ht->array[index] = node;
	}
	return (1);
}
/**
*_strlen - calculate the length of a string
*@str: the target string
*
*Return: the length of the string
*/
int _strlen(const char *str)
{
	int i = 0;

	if (str != NULL)
	{
		while (str[i] != '\0')
			i++;
	}
	return (i);
}
/**
*_strdup - duplicate a string
*@str: the target string
*
*Return: A pointer to the duplicated string
*/
char *_strdup(const char *str)
{
	char *dup;
	int i;

	if (str == NULL)
		return (NULL);
	dup = (char *)malloc(sizeof(char) * (_strlen(str) + 1));
	if (dup == NULL)
		return (NULL);
	for (i = 0; i <= _strlen(str); i++)
		dup[i] = str[i];
	return (dup);
}
