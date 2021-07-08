#include "holberton.h"

/**
 * _print_rev_recursion - print string in reverse
 * @s: string
 */

void _print_rev_recursion(char *s)
{

int i = 0;

if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(s[i]);
}

}
