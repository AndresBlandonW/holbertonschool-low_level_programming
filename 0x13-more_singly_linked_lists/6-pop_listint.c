#include "lists.h"

/**
 * pop_listint - delete head node
 * @head: data
 *
 * Return: d
 */

int pop_listint(listint_t **head)
{

listint_t *temp;
int x;

if (*head == NULL)
return (0);

temp = *head;
x = temp->n;
temp = temp->next;

free(*head);
*head = temp;

return (x);

}
