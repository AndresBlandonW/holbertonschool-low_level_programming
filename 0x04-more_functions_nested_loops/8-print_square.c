#include "holberton.h"

/**
* print_square - draws a square
* @size: size
*/

void print_square(int size)
{

int c, f;
int ch = 35;

if (size > 0)
{

for (f = 0; f < size; f++)
{


for (c = 0; c < size; c++)
{
_putchar(ch);
}

_putchar('\n');

}
}
else
_putchar('\n');

}
