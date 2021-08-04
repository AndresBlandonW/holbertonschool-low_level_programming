#include "lists.h"

/**
 * add_nodeint_end - add new node int at end
 * @head: pointer
 * @n: data
 * Return: the address of element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

listint_t *newNodeint = malloc(sizeof(listint_t));
listint_t *lastNodeint;

if (newNodeint == NULL)
return (NULL);

newNodeint->n = n;
newNodeint->next = NULL;

if (*head == NULL)
{
*head = newNodeint;
return (*head);
}

lastNodeint = *head;
while (lastNodeint->next != NULL)
{
lastNodeint = lastNodeint->next;
}
lastNodeint->next = newNodeint;

return (newNodeint);

}
