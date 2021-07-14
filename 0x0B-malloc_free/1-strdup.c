#include "holberton.h"
#include <stdlib.h>
int _strlen(char *s);

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
 * _strdup - pointer to a newly
 * @str: pointer
 *s
 * Return: pointer
 */

char *_strdup(char *str)
{
int size;
char *cpy;
int i = 0;

size = _strlen(str);
cpy = (char *) malloc(sizeof(char) * (size + 1));

if (str == NULL)
{
return (NULL);
}

if (cpy == NULL)
{
return (NULL);
}

while (str[i] != '\0')
{
cpy[i] = str[i];
i++;
}
cpy[i] = '\0';

return (cpy);
}
