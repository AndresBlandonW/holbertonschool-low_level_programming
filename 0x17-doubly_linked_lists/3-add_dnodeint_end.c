#include "lists.h"

/**
 * add_dnodeint_end - adds a new node
 * @head: linked doubly list
 * @n: data
 * Return: address of the new elem
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNodeEnd = malloc(sizeof(dlistint_t));
	dlistint_t *lastNode;

	if (newNodeEnd == NULL)
		return (NULL);

	newNodeEnd->n = n;
	newNodeEnd->next = NULL;

	if (*head == NULL)
	{
		newNodeEnd->prev = NULL;
		*head = newNodeEnd;
	}
	else
	{
		lastNode = *head;
		while (lastNode->next)
		{
			lastNode = lastNode->next;
		}
		newNodeEnd->prev = lastNode;
		lastNode->next = newNodeEnd;
	}

	return (newNodeEnd);
}
