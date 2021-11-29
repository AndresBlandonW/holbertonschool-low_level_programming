#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at given pos
 * @h: linked doubly list
 * @idx: index of the new node
 * @n: data
 * Return:  address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *tmp = *h;

	if (newNode == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	newNode->n = n;
	newNode->prev = tmp;
	newNode->next = tmp->next;
	tmp->next->prev = newNode;
	tmp->next = newNode;

	return (newNode);
}
