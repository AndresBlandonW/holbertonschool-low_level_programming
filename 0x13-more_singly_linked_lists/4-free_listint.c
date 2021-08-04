#include "lists.h"

/**
 * free_listint - free a listint_t
 * @head: pointer
 */

void free_listint(listint_t *head)
{

listint_t *tmp;

tmp = head;
while (tmp)
{
tmp = tmp->next;
free(head->n);
free(head);
}
free(tmp);


}
