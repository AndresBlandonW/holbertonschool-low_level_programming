#include "holberton.h"

/**
 * _strlen_recursion - length of a string
 * @s: string
 *
 * Return: length
 */


int _strlen_recursion(char *s)
{

int len = 1;

if (*s != '\0')
{
return (len + _strlen_recursion(s + 1));
}
else
{
return (0);
}

}
