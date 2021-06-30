#include "holberton.h"

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
