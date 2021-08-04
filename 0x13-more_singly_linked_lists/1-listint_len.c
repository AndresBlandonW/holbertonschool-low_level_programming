#include "lists.h"

/**
 * listint_len - prints the num ele
 * @h: pointer of struct
 * Return: num of elem in lnk
 */

size_t listint_len(const listint_t *h)
{

size_t n_elem = 0;

while (h)
{
n_elem++;
h = h->next;
}

return (n_elem);

}
