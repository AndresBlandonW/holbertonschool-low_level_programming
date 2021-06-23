#include "holberton.h"

/**
* print_to_98 - print number 1 to 98
* @n: data
*
*/

void print_to_98(int n)
{
int x;

_putchar(n);

for (x = n + 1; x <= 98; x++)
{
_putchar(',');
_putchar(' ');
_putchar(x);
}

}
