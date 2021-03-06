#include "holberton.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 *
 * Return: concatenates
 */

char *_strcat(char *dest, char *src)
{
int len, j;
len = 0;
while (*(dest + len) != 0)
{
len++;
}

for (j = 0; src[j] != '\0'; ++j, ++len)
{
dest[len] = src[j];
}

dest[len] = '\0';

return (dest);
}
