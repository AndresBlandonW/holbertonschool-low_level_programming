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
	dlistint_t *tmp;

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *h;
		*h = newNode;
		return (newNode);
	}
	tmp = *h;

	while (idx > 1)
	{
		if (tmp == NULL)
		{
			return (NULL);
		}

		tmp = tmp->next;
		idx--;
	}

	newNode->next = tmp->next;
	tmp->next = newNode;
	return (newNode);
}
