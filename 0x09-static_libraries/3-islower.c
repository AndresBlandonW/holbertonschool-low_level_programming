#include "holberton.h"

/**
 * _islower - check lowercase character
 * @c: data
 *
 * Return: value 0 or 1
 */

int _islower(int c)
{

if (c >= 'a' && c <= 'z')
return (1);
else
return (0);

}
