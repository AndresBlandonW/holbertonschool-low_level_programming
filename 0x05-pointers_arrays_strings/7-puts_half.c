#include "holberton.h"

/**
* puts_half - print half
* @str: string
*/

void puts_half(char *str)
{

int len;
int half;

len = 0;
while (*(str + len) != 0)
{
	len++;
}


half = len / 2;
if (len % 2 != 0)
{
half += 1;
while (half < len)
{
_putchar(str[half]);
half++;
}
}
else
{
while (half < len)
{
_putchar(str[half]);
half++;
}
}
_putchar('\n');
}
