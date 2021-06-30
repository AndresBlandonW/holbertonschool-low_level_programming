#include "holberton.h"

/**
* puts2 - print other
* @str: string
*/

void puts2(char *str)
{

int i;
int len;
len = 0;
i = 0;

while (*(str + len) != 0)
{
len++;
}

while (i < len)
{
_putchar(str[i]);
i += 2;
}
_putchar('\n');

}
