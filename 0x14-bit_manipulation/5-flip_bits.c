#include "main.h"

/**
 * flip_bits - number of bits you would need to flip
 * @n: flip num
 * @m: num to flip
 * Return: need to flip to get from one num to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

unsigned long int mask;
unsigned int sum = 0;

mask = n ^ m;

while (mask > 0)
{
sum += mask & 1;
mask >>= 1;
}

return (sum);

}
