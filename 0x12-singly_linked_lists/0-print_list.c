#include "lists.h"
#include <string.h>
#include <stdarg.h>

/**
 * print_list - prints all ele of list_t
 * @h: pointer of struct
 * Return: num of nodes
 */

size_t print_list(const list_t *h)
{

size_t num = 0;

while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);

num++;
h = h->next;
}

return (num);
}
