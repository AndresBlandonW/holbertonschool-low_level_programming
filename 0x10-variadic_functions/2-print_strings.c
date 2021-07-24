#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints string
 * @separator: separator
 * @n: lenght
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

unsigned int i;
va_list ps;
char *str;

va_start(ps, n);
for (i = 0; i < n; i++)
{

str = va_arg(ps, char*);

if (str == NULL)
printf("(nil)");
else
printf("%s", str);

if (separator != NULL && i + 1 != n)
printf("%s", separator);
}

va_end(ps);
printf("\n");

}
