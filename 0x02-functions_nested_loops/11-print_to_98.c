#include "holberton.h"
#include <stdio.h>

/**
* print_to_98 - print number 1 to 98
* @n: data
*
*/

void print_to_98(int n)
{
int x;

if (n > 98)
{

for (x = n; x > 98; x--)
{
printf("%d, ", x);
}
printf("%d\n", x);
}
else
{
for (x = n; x < 98; x++)
{
printf("%d, ", x);
}
printf("%d\n", x);
}

}
