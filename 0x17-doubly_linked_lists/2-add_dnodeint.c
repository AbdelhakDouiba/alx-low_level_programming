#include "lists.h"
/**
*add_dnodeint - adds a new node at the beginning of a dlistint_t list.
*@head: head of a list
*@n: data to be added
*
*Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (*head != NULL)
		(*head)->prev = node;
	node->next = *head;
	node->prev = NULL;
	*head = node;
	return (node);
}
