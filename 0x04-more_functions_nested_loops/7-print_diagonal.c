#include "holberton.h"

/**
* print_diagonal - draws a diagonalline
* @n: size
*/

void print_diagonal(int n)
{

int c, es;

if (n > 0)
{

for (c = 1; c <= n; c++)
{

_putchar('\\');
_putchar('\n');
 
for (es = 0; es < c; es++)
{
_putchar(' ');
}

}

}
else
_putchar('\n');

}
