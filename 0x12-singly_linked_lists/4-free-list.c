#include "lists.h"

/**
 * free_list - free a list_t
 * @head: pointer
 */

void free_list(list_t *head)
{

list_t *tmp;

tmp = head;
while (tmp)
{
tmp = tmp->next;
free(head->str);
free(head);
head = tmp;

}
free(tmp);
free(head);

}
