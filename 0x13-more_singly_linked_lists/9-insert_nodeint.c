#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given pos
 * @head: data
 * @idx: index list
 * @n: position
 * Return: address of node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

listint_t *newNode = malloc(sizeof(listint_t));
listint_t *tmp;

if (newNode == NULL)
return (NULL);

newNode->n = n;
newNode->next = NULL;

if (idx == 0)
{
newNode->next = *head;
*head = newNode;
return (newNode);
}

tmp = *head;

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
