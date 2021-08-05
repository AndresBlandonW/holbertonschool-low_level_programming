#include "lists.h"

/**
 * get_nodeint_at_index - the nth node
 * @head: data
 * @index: index of node 0
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

listint_t *current;
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
