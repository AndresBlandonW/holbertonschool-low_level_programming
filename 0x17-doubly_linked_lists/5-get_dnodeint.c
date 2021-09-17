#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 * @head: linked doubly list
 * @index: index data
 * Return: the nth node of dlist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count = 0;

	current = head;

	while (count < index)
	{

		if (current == NULL)
		{
			return (NULL);
		}

		count++;
		current = current->next;
	}

	return (current);

}
