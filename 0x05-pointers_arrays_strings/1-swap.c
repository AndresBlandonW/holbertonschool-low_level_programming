#include "holberton.h"

/**
* swap_int - swap the values
* @a: pointer value
* @b: pointer value
*/

void swap_int(int *a, int *b)
{
int num1 = *a;
int num2 = *b;

*a = num2;
*b = num1;
}
