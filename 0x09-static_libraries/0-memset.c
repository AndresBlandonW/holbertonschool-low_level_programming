#include "holberton.h"

/**
 * _memset - fills memory with a constant byte
 * @s: string 1
 * @b: string 2
 * @n: byte
 * Return: concatenates
 */

char *_memset(char *s, char b, unsigned int n)
{

unsigned int cb = 0;

for (cb = 0; cb < n; cb++)
{
s[cb] = b;
}
return (s);
}
