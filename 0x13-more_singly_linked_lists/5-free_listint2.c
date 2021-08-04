#include "lists.h"

/**
 * free_listint2 - free a listint_t
 * @head: pointer
 */

void free_listint2(listint_t **head)
{

listint_t *tmp;

while (*head)
{
tmp = *head;
*head = tmp->next;
free(tmp);
}

*head = NULL;

}
