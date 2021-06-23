#include "holberton.h"

/**
* times_table - print the 9 times table
*
*/

void times_table(void)
{
int x;
int tabla;

for (x = 0; x <= 9; x++)
{

  _putchar('0');

for (tabla = 1; tabla <= 9; tabla++)
{
_putchar(',');
_putchar(' ');
_putchar((x * tabla) + '0');
}

_putchar('\n');
}

}
