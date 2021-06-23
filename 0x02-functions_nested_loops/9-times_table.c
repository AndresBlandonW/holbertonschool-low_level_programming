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
for (tabla = 0; tabla <= 9; tabla++)
{
_putchar((x * tabla) + '0');
}
}

}
