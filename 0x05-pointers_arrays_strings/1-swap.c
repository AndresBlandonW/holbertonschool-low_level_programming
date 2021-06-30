#include "holberton.h"

/**
* swap_int - swap the values
* @a: pointer value
* @b: pointer value
*/

void swap_int(int *a, int *b)
{
int num1 = *b;
int num2 = *a;

*a = num2;
*b = num1;
}
