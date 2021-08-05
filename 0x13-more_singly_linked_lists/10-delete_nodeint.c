#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at idx
 * @head: data
 * @index: index of node
 * Return: 1 success or -1 failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

listint_t *current;
listint_t *tmp;

if (*head == NULL)
return (-1);

tmp = *head;

if (index == 0)
{
*head = tmp->next;
free(tmp);
return (1);
}

while (index > 1)
{
tmp = tmp->next;

if (tmp == NULL)
{
return (-1);
}
else if (tmp->next == NULL)
return (-1);

index--;
}

current = tmp->next->next;
free(tmp->next);

tmp->next = current;

return (1);
}
