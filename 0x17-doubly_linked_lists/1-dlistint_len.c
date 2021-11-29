#include "lists.h"

/**
 * dlistint_len - number elem of linked
 * @h: linked list
 * Return: num of elemt
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
