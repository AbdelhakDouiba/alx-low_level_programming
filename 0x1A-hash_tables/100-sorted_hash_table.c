#include "hash_tables.h"

/**
*shash_table_set - adds an element to the hash table.
*@ht: pointer to the hashtable
*@key: the input key
*@value: the value to be added
*
*Return: 1 if it succeeded, 0 otherwise
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || _strlen(key) == 0 || value == NULL ||
	    _strlen(value) == 0)
		return (0);
	node = (shash_node_t *)malloc(sizeof(shash_node_t));
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
		free(node->key), free(node);
		return (0);
	}
	node->next = NULL;
	node->snext = NULL;
	node->sprev = NULL;
	index = key_index((unsigned char *)key, ht->size);
	insert(ht, node, index);
	return (1);
}
/**
*insert - sorted insertion
*@ht: the selected hashtable map
*@node: node
*@i: index
*
*/

void insert(shash_table_t *ht, shash_node_t *node, unsigned long int i)
{
	shash_node_t *tmp = ht->array[i];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, node->key) == 0)
		{
			free(tmp->value);
			tmp->value = _strdup(node->value);
			free(node->key);
			free(node->value);
			free(node);
			node = tmp;
			if (strcmp(tmp->sprev->key, node->key) < 0 &&
				strcmp(tmp->snext->key, node->key) > 0)
			{
				return;
			}
			else
			{
				node->sprev->snext = node->snext;
				node->snext->sprev = node->sprev;
				sort(ht, node);
				return;
			}
		}
		tmp = tmp->next;
	}
	node->next = ht->array[i];
	ht->array[i] = node;
	sort(ht, node);
}

/**
*sort - sort insertion for nodes
*@ht: hashtable
*@node: node to sorted
*
*/
void sort(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *tmp = ht->shead;

	if (ht->shead == NULL)
	{
		node->snext = NULL;
		node->sprev = NULL;
		ht->shead = node;
		ht->stail = node;
	}
	else
	{
		while (tmp != NULL && strcmp(tmp->key, node->key) < 0)
			tmp = tmp->snext;
		if (tmp == NULL)
		{
			node->sprev = ht->stail;
			if (ht->stail != NULL)
				ht->stail->snext = node;
			if (ht->stail == NULL)
				ht->shead = node;
			ht->stail = node;
		}
		else
		{
			node->snext = tmp;
			node->sprev = tmp->sprev;
			tmp->sprev = node;
			if (node->sprev == NULL)
				ht->shead = node;
			if (node->sprev != NULL)
				node->sprev->snext = node;
		}
	}
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

/**
*shash_table_create - creates a hash table.
*@size: size of the hash table
*
*Return: a pointer to the newly created hash table
*/

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hashtable;
	unsigned long int i;

	if (size <= 0)
		return (NULL);
	hashtable = (shash_table_t *)malloc(sizeof(shash_table_t));
	if (hashtable == NULL)
		return (NULL);
	hashtable->size = size;
	hashtable->array = (shash_node_t **)malloc(sizeof(shash_node_t *) * size);
	if (hashtable->array == NULL)
	{
		free(hashtable);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		hashtable->array[i] = NULL;
	hashtable->shead = NULL;
	hashtable->stail = NULL;
	return (hashtable);
}

/**
*shash_table_get - retrieves a value associated with a key.
*@ht: A pointer to the hash table
*@key: the key of the value
*
*Return: the value associated with the element, or NULL if key
*	 couldn’t be found
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *tmp;
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

/**
*shash_table_print - prints a hash table.
*@ht: the target hash table
*
*/
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;

	if (ht == NULL)
		return;
	tmp = ht->shead;
	printf("{");
	while (tmp != NULL)
	{
		printf("'%s': '%s'", tmp->key, tmp->value);
		if (tmp->snext != NULL)
			printf(", ");
		tmp = tmp->snext;
	}
	printf("}\n");
}

/**
*shash_table_print_rev - prints the reverse of the hash table.
*@ht: the target hash table
*
*/
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;

	if (ht == NULL)
		return;
	tmp = ht->stail;
	printf("{");
	while (tmp != NULL)
	{
		printf("'%s': '%s'", tmp->key, tmp->value);
		if (tmp->sprev != NULL)
			printf(", ");
		tmp = tmp->sprev;
	}
	printf("}\n");
}

/**
*shash_table_delete - deletes a hash table.
*@ht: the target hash table.
*
*/
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *tmp, *var;

	if (ht == NULL)
		return;
	tmp = ht->shead;
	while (tmp != NULL)
	{
		var = tmp;
		tmp = tmp->snext;
		free(var->key);
		free(var->value);
		free(var);
	}
	free(ht->array);
	free(ht);
}
