#include "lists.h"

/**
 * sum_listint - return the sum of all data m
 * @head: data
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{

listint_t *current;
int sum = 0;

if (head == NULL)
return (0);

current = head;

while (current)
{
sum += current->n;
current = current->next;
}

return (sum);

}
