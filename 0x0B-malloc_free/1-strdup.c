#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - pointer to a newly
 * @str: pointer
 *s
 * Return: pointer
 */

char *_strdup(char *str)
{

char *cpy;
int i = 0;

if (str == NULL)
{
return (NULL);
}

while (str[i] != 0)
{
i++;
}

i++;
cpy = malloc(sizeof(char) * i);

if (cpy == NULL)
{
return (NULL);
}

for (i = 0; str[i] != 0; i++)
{
cpy[i] = str[i];
}

cpy[i] = 0;

return (cpy);
}
