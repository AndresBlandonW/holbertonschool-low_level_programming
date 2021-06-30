#include "holberton.h"

/**
* _puts - prints
* @str: string
*/

void _puts(char *str)
{

while (*str)
{
_putchar(*str);
str++;
}
_putchar('\n');

}
