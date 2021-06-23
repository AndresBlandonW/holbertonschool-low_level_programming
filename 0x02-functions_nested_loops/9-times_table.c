#include "holberton.h"

/**
* times_table - print the 9 times table
*
*/

void times_table(void)
{
int x, tabla, res;

for (x = 0; x <= 9; x++)
{

_putchar('0');

for (tabla = 1; tabla <= 9; tabla++)
{
_putchar(',');
_putchar(' ');

res = (x * tabla);

if (res <= 9)
_putchar(' ');
else
_putchar((res / 10) + '0');
_putchar((res % 10) + '0');

}

_putchar('\n');
}

}
