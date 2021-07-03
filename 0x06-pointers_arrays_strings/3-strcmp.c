#include "holberton.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: compares
 */

int _strcmp(char *s1, char *s2)
{
int len_s1, len_s2;
int lar;
int i = 0;
int result = 0;

len_s1 = 0;
while (*(s1 + len_s1) != 0)
{
len_s1++;
}

len_s2 = 0;
while (*(s2 + len_s2) != 0)
{
len_s2++;
}

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
