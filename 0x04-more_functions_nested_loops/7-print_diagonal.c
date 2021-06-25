#include "holberton.h"

/**
* print_diagonal - draws a diagonalline
* @n: size
*/

void print_diagonal(int n)
{

int c;
int x = 92;

if (n > 0)
{

for (c = 1; c <= n; c++)
{
_putchar(x);
_putchar('\n');
}

}

_putchar('\n');

}
