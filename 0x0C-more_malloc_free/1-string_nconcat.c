#include "holberton.h"
#include <stdlib.h>

/**
* _strlen - return the length
* @s: pointer value
* Return: length
*/

int _strlen(char *s)
{

int len;

len = 0;
while (*(s + len) != 0)
{
len++;
}
return (len);

}


/**
 * string_nconcat - concat two strings
 * @s1: string 1
 * @s2: string 2
 * @n: value
 *
 * Return: data
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

char *cstr;
unsigned int sizes1, sizes2;
unsigned int i = 0, j = 0;

sizes1 = _strlen(s1);
sizes2 = _strlen(s2);

if (s1 == NULL)
sizes1 = 0;

if (s2 == NULL)
sizes2 = 0;

if (n <= sizes2)
sizes2 = n;

cstr = (char *) malloc(sizeof(char) * (sizes1 + sizes2 + 1));

if (cstr == NULL)
return (NULL);

if (sizes1 > 0)
{
while (s1[i] != '\0' && i < sizes1)
{
cstr[i] = s1[i];
i++;
}
}

if (sizes2 > 0)
for (; j < sizes2; i++, j++)
{
cstr[i] = s2[j];
}
cstr[i] = '\0';
return (cstr);
}
