#include "lists.h"

/**
 * add_nodeint - add node
 * @head: pointer of struct
 * @n: const int
 * Return: address of new elem
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

listint_t *newNode = malloc(sizeof(listint_t));

if (newNode == NULL)
return (NULL);

newNode->n = n;
newNode->next = *head;
*head = newNode;

return (newNode);

}
