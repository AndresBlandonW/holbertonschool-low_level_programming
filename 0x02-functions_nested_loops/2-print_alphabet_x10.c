#include "holberton.h"

/**
 * print_alphabet_x10 - print alphabet x10
 *
 */

void print_alphabet_x10(void)
{

char c;
int x;

x = 1;
while (x <= 10)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}

_putchar('\n');
x++;
}


}
