#include "holberton.h"

/**
 * _memcpy -  copy memory area
 * @dest: string 1
 * @src: string 2
 * @n: byte
 * Return: concatenates
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int cpy;

for (cpy = 0; cpy < n; cpy++)
{
dest[cpy] = src[cpy];
}
return (dest);
}
