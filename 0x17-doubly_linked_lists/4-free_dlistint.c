#include "lists.h"
/**
*free_dlistint - free_dlistint
*@head: a pointer to the list
*
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	while (head != NULL)
	{
		head = head->next;
		free(tmp);
		tmp = head;
	}
}
