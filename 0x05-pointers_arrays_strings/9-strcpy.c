#include "holberton.h"

/**
* _strcpy - copies the string
* @dest: string
* @src: string
* Return: dest
*/

char *_strcpy(char *dest, char *src)
{
int i;
i = 0;

while (*(src + i))
{
*(dest + i) = *(src + i);
i++;
}
*(dest + i) = '\0';
return (dest);
}
