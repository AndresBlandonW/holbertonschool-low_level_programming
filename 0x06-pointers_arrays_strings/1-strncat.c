#include "holberton.h"

/**
 * _strncat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 * @n: n byte
 * Return: concatenates
 */

char *_strncat(char *dest, char *src, int n)
{
int i, j;
j = n;

for (i = 0; dest[i] != '\0'; ++i)
{
for (j = 0; src[j] != '\0'; ++j, ++i)
{
if (j < n)
dest[i] = src[j];
}
}
dest[i] = '\0';


return (dest);
}
