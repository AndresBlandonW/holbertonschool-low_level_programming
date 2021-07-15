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
 * str_concat - concatenates str
 * @s1: string 1
 * @s2: string 2
 * Return: conc
 */


char *str_concat(char *s1, char *s2)
{

char *cstr;
int sizes1, sizes2;
int i = 0;

if (s1 == NULL)
sizes1 = 0;
else
sizes1 = _strlen(s1);

if (s2 == NULL)
sizes2 = 0;
else
sizes2 = _strlen(s2);

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
{
for (; s2[j] != '\0'; i++, j++)
{
cstr[i] = s2[j];
}
}
cstr[i] = '\0';

return (cstr);
}
