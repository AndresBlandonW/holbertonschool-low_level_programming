#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_char(va_list);
void print_int(va_list);
void print_float(va_list);
void print_str(va_list);
void print_nil(va_list);
/**
 * print_all - prints anything
 * @format: format
 */

void print_all(const char * const format, ...)
{

printall types[] = {
{"c", print_char},
{"i", print_int},
{"f", print_float},
{"s", print_str},
{NULL, NULL}
};

va_list pa;
int i, j;
char *separator = "";

va_start(pa, format);
i = 0;
while (format && format[i])
{
j = 0;
while (types[j].type)
{
if (*(types[j].type) == format[i])
{
printf("%s", separator);
types[j].f(pa);
separator = ", ";
}
j++;
}
i++;
}
va_end(pa);
printf("\n");
}

/**
 * print_char - print char 
 * @args: char
 */

void print_char(va_list args)
{
printf("%c", va_arg(args, int));
}

/**
 * print_int - print int 
 * @args: int
 */

void print_int(va_list args)
{
printf("%d", va_arg(args, int));
}

/**
 * print_float - print float 
 * @args: float
 */

void print_float(va_list args)
{
printf("%f", va_arg(args, double));
}

/**
 * print_str - print str 
 * @args: str
 */

void print_str(va_list args)
{
char *str;

str = va_arg(args, char *);

if (str == NULL)
printf("(nil)");
else
printf("%s", str);
}
