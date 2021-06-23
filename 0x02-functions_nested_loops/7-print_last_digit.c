#include "holberton.h"

/**
* print_last_digit - print the last digital of value
* @x: calculation
*
* Return: last digit
*/

int print_last_digit(int x)
{
int last;
last = (x % 10);

if (last < 0)
last *= -1;

_putchar(last + '0');

return (last);

}
