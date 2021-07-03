#include "holberton.h"

/**
 * reverse_array - reverses the contect
 * @a: array
 * @n: num element
 */

void reverse_array(int *a, int n)
{
int i = n - 1;
int start;
int rev;


for (start = 0; start < n / 2; start++)
{
rev = a[start];
a[start] = a[i];
a[i] = rev;

i--;
}

}
