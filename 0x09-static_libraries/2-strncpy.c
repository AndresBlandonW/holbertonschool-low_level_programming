#include "holberton.h"

/**
 * _strlen - len of string
 * @s: string
 *
 * Return: len
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
 * _strncpy - concatenates two strings
 * @dest: string 1
 * @src: string 2
 * @n: n byte
 * Return: concatenates
 */

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
int len = _strlen(src);


if (len > n)
{
while (i < n)
{
dest[i] = src[i];
i++;
}
}
else
{
while (src[i] != 0)
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
}

return (dest);
}
