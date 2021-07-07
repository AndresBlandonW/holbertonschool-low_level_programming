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
 * _strspn - length of a prefix substring
 * @s: string
 * @accept: data
 * Return: concatenates
 */

unsigned int _strspn(char *s, char *accept)
{

int i, j;
unsigned int num = 0;
int len_acpt = _strlen(accept);

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
num++;
break;
}
else if (j == len_acpt - 1 && s[i] != accept[len_acpt - 1])
{
return (num);
}

}
}

return (num);
}
