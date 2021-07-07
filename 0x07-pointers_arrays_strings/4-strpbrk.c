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
 * _strpbrk -  searches a string for any
 * @s: string
 * @accept: data
 * Return: search
 */

char *_strpbrk(char *s, char *accept)
{

int i, j;
int len_s = _strlen(s);

for (i = 0; i < len_s; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
return (s + i);
break;
}
}
}

return ('\0');
}
