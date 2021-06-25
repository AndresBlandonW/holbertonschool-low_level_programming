#include "holberton.h"

/**
* print_triangle - prints a triangle
* @size: size
*/


void print_triangle(int size)
{

int f, esp, t;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (f = 0; f < size; f++)
{
for (esp = 1; esp < size - f; esp++)
{
_putchar(' ');
}

for (t = 0; t <= f; t++)
{
_putchar(35);
}

_putchar('\n');
}
}

}
