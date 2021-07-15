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
int i = 0, j = 0;

sizes1 = _strlen(s1);
sizes2 = _strlen(s2);

cstr = (char *) malloc(sizeof(char) * (sizes1 + sizes2 + 1));

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
while (s2[j] != '\0')
{
cstr[i] = s2[j];
i++;
j++;
}
}
cstr[i] = '\0';

return (cstr);
}
