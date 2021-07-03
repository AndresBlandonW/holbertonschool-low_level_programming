#include "holberton.h"

/**
 * _strlen - length of string
 * @s: string
 *
 * Return: length
 */
int _strlen(char *s)
{
int len = 0;

while (*(s + len) != 0)
{
len++;
}
return (len);
}


/**
 * _strncat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 * @n: n byte
 * Return: concatenates
 */

char *_strncat(char *dest, char *src, int n)
{
int j;
int i = _strlen(dest);
int len_src = _strlen(src);

if (len_src < n)
{
for (j = 0; len_src > 0; ++i, ++j, len_src--)
{
dest[i] = src[j];
}
dest[i] = '\0';
}
else
{
for (j = 0; n > 0; ++i, ++j, n--)
{
dest[i] = src[j];
}
}


return (dest);
}
