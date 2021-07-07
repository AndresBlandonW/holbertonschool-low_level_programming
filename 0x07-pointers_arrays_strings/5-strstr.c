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
 * _strstr -  searches a string for any
 * @haystack: string
 * @needle: data
 * Return: search
 */

char *_strstr(char *haystack, char *needle)
{

int i, j, k;
int can = 0;
int len_n = _strlen(needle);

for (i = 0; haystack[i] != '\0'; i++)
{
if (haystack[i] == needle[0])
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i] == needle[j])
{
i++;
can++;
}
}

if (can == len_n)
{
for (k = i - len_n; haystack[k] != '\0'; k++)
{
return (&haystack[k]);
}
}
}
}

return ('\0');

}
