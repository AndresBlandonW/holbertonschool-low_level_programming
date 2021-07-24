#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: separator
 * @n: lenght
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

unsigned int i;
va_list pn;

if (separator != NULL)
{
va_start(pn, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(pn, int));

if (i + 1 != n)
printf("%s", separator);
}
va_end(pn);

printf("\n");
}

}
