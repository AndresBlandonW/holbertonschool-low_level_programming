#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free a list_t
 * @head: pointer
 */

void free_list(list_t *head)
{

list_t *tmp;

while (head != NULL)
{
tmp = head;
tmp = head->next;
free(head->str);
free(head);
free(tmp);
}

}
