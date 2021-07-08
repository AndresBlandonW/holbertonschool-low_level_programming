#include "holberton.h"

/**
 * _puts_recursion - print string
 * @s: string
 */

void _puts_recursion(char *s)
{
_putchar(*s);
s++;

if (*(s-1) != '\0') 
{
_puts_recursion(s);
}

}
