#include "holberton.h"
/**
 * leet - encode a string
 * @a: the string
 *
 * Return: the encoded string
 */
char *leet(char *a)
{
int i;
int lt = 0;
char leet[] = "AEOTL43071";

while (a[lt] != 0)
{
i = 0;
while (i < 5)
{
if (a[lt] == leet[i] || a[lt] - 32 == leet[i])
{
a[lt] = leet[i + 5];
}
i++;
}
lt++;
}
return (a);
}
