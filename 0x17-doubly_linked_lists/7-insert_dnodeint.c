#include "lists.h"
/**
*insert_dnodeint_at_index - inserts a new node at a given position.
*@h: a pointer to the list
*@idx: the postion.
*@n: data to be added
*
*Return:the address of the new node, or NULL if it failed.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *tmp;

	if (idx == 0)
		return (add_dnodeint(h, (const int)n));
	if (idx == dlistint_len((const dlistint_t *)(*h)))
		return (add_dnodeint_end(h, (const int)n));
	node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	tmp = get_dnodeint_at_index(*h, idx);
	if (tmp == NULL)
	{
		free(node);
		return (NULL);
	}
	node->prev = tmp->prev;
	node->next = tmp;
	tmp->prev->next = node;
	tmp->prev = node;
	return (node);
}
/**
*get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
*@head: a pointer the list
*@index: index of the target node
*
*Return: the nth node of a dlistint_t linked list. NULL if the node does
*	 not exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; head != NULL && i < index; i++)
		head = head->next;
	return (head);
}
/**
 * dlistint_len - function that returns the number of elements in a linked list
 * @h: node
 * Return: lenght of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
