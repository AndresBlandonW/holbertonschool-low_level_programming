#include "holberton.h"

/**
* print_line - draw a straight line
* @n: size
*/

void print_line(int n)
{

int c;

if (n > 0)
{

for (c = 0; c <= n; c++)
{
_putchar(95);
}

}

_putchar('\n');

}
