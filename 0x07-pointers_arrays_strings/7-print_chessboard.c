#include "holberton.h"

/**
 * print_chessboard - prints the chessboard
 * @a: board
 */

void print_chessboard(char (*a)[8])
{
    int h, v;

for (h = 0; h < 8; h++)
{
for (v = 0; v < 8; v++)
{
_putchar(a[h][v]);

if (v == 7)
{
_putchar('\n');
}

}
}
}
