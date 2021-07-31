#include "lists.h"

/**
 * list_len - prints the num ele
 * @h: pointer of struct
 * Return: num of elem in lnk
 */

size_t list_len(const list_t *h)
{

size_t num_elem = 0;

while (h != NULL)
{
num_elem++;
h = h->next;
}

return (num_elem);

}
