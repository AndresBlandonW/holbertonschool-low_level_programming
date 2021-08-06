#include "main.h"

/**
 * set_bit - sets vl bit to 1 at idx
 * @n: data
 * @index: index to start
 * Return: 1 if work or -1 error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int len = sizeof(*n);

if (index > len * 8)
{
return (-1);
}
else
{
*n |= 1 << index;
return (1);
}

}
