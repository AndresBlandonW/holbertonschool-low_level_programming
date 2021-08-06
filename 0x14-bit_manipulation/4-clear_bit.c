#include "main.h"

/**
 * clear_bit - sets vl of a bit to 0 at a idx
 * @n: data
 * @index: index starting from 0
 * Return: 1 if work or -1 error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

unsigned long int len = sizeof(*n);

if (index > len * 8)
{
return (-1);
}
else
{
*n = (*n & ~(1 << index));
return (1);
}

}
