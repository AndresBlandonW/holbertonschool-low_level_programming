#include "holberton.h"

/**
* _abs - the absolute value of integer
* @c: data
* Return: absolute value
*/

int _abs(int c)
{

if (c < 0)
{
c = c * -1;
_putchar(c);
}
else
{
_putchar(c);
}

return (0);
}
