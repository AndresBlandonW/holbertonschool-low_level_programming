#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - the two diagonals of a square matrix
 * @a: data
 * @size: size
 */

void print_diagsums(int *a, int size)
{
int i, j, sum1 = 0, sum2 = 0;

for (i = 0; i < size; i++)
{
sum1 += a[i];
a += size;
}

a -= size;

for (j = 0; j < size; j++)
{
sum2 += a[j];
a -= size;
}

printf("%d, %d\n", sum1, sum2);
}
