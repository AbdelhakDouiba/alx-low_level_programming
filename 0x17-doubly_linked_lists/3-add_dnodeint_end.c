#include "lists.h"
/**
*add_dnodeint_end - adds a new node at the end of a dlistint_t list.
*@head: head of a list
*@n: data to be added
*
*Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp = *head, *node;

	node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	while (tmp != NULL && tmp->next != NULL)
		tmp = tmp->next;
	if (tmp == NULL)
	{
		node->next = NULL;
		*head = node;
	}
	else
	{
		node->next = tmp->next;
		tmp->next = node;
	}
	node->prev = tmp;
	return (node);
}
