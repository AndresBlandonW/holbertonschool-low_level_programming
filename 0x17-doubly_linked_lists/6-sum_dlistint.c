#include "lists.h"

/**
 * sum_dlistint - the sum of all data
 * @head: linked doubly list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	if (head == NULL)
		return (0);

	current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
