#include "holberton.h"

/**
 * reverse_array - reverses the contect
 * @a: array
 * @n: num element
 */

void reverse_array(int *a, int n)
{
int i;
int start = 0;
int rev;


for (i = n - 1; i < n ; i--, start++)
{
rev = a[start];
a[start] = a[i];
a[i] = rev;
}
}
