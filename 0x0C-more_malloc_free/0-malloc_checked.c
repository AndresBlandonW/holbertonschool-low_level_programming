#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory u
 * @b: value
 * Return: data
 */

void *malloc_checked(unsigned int b)
{

void *am;

am = malloc(b);

if (am == NULL)
{
exit(98);
}

return (am);

}
