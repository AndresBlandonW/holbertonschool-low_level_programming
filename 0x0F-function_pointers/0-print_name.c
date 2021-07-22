#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name
 * @f: void f
 */

void print_name(char *name, void (*f)(char *))
{

if (f == NULL)
return;

if (name == NULL)
return;

f(name);

}
