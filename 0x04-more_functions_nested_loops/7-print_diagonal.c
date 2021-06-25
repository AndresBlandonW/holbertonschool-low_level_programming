#include "holberton.h"

/**
* print_diagonal - draws a diagonalline
* @n: size
*/

void print_diagonal(int n)
{

int c, es;
int x = 92;

if (n > 0)
{

for (c = 1; c <= n; c++)
{
_putchar(x);
_putchar('\n');

for (es = 0; es < c; es++)
{
_putchar(32);
}

}

}

_putchar('\n');

}
