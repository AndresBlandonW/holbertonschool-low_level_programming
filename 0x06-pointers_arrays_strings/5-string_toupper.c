#include "holberton.h"

/**
 * string_toupper - lowercase letters
 * @a: array
 * Return: lowercase string
 */

char *string_toupper(char *a)
{
int i;

for (i = 0; a[i] != '\0'; i++)
{
if (a[i] >= 'a' && a[i] <= 'z')
{
a[i] = a[i] - 32;
}
}

return (a);
}
