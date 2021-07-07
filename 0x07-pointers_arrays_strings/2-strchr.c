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
 * _strchr - locates a character in a string
 * @s: characters
 * @c: position
 * Return: concatenates
 */

char *_strchr(char *s, char c)
{

int i;
int j = 0;
int len_s = _strlen(s);

for (i = 0; i < len_s; i++)
{
if (s[i] == c)
{
for (j = i; s[j] != '\0'; j++)
{
return ((&s[j]));
j++;
}
}
}

if (c == '\0')
return (&s[i]);

return ('\0');
}
