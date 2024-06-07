#include "lists.h"
/**
*delete_dnodeint_at_index - deletes the node at index index
*			    of a dlistint_t linked list.
*@head: a pointer to the list.
*index: the postion of the target node.
*
*Returns: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int i;

	for (i = 0; tmp != NULL && i < index; i++)
		tmp = tmp->next;
	if (tmp == NULL)
		return (-1);
	if (index == 0)
		*head = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = tmp->prev;
	if (tmp->prev != NULL)
		tmp->prev->next = tmp->next;
	free(tmp);
	return (1);
}
