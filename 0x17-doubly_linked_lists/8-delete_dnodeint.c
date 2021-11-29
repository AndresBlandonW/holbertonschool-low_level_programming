#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: header linked doubly list
 * @index: index of node
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int j;

	if (head == NULL || *head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		*head = tmp->next;
		if (tmp->next != NULL)
		{
			tmp->next->prev = NULL;
		}
		free(tmp);
		return (1);
	}
	for (j = 0; j < index; j++)
	{
		if (tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
	}
	tmp->prev->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = tmp->prev;
	free(tmp);
	return (1);
}
