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
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: compares
 */

int _strcmp(char *s1, char *s2)
{
int lar;
int i = 0;
int result = 0;

int len_s1 = _strlen(s1);
int len_s2 = _strlen(s2);

if (len_s1 > len_s2)
{
lar = len_s1;
}
else
{
lar = len_s2;
}

while (lar > i)
{
if (s1[0] == s2[0])
{
i++;
}
else
{
result = s1[i] - s2[i];
break;
}
}

return (result);

}
