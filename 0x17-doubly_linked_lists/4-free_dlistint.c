#include "lists.h"

/**
 * free_dlistint - frees a dlist
 * @head: linked doubly list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	tmp = head;
	while (tmp)
	{
		tmp = tmp->next;
		free(head);
		head = tmp;
	}
}
