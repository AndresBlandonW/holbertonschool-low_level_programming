#include "holberton.h"

/**
* more_numbers - prints the numbers 10 times
*
*/

void more_numbers(void)
{

int c, c2;

for (c = 0; c < 10; c++)
{
for (c2 = 0; c2 < 15; c2++)
{
if (c2 > 9)
{
_putchar(c2 / 10 + '0');
}
_putchar(c2 % 10 + '0');
}
_putchar('\n');
}

}
