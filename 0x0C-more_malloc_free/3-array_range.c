#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array of ints
 * @min: min elements
 * @max: max elements
 *
 * Return: data
 */

int *array_range(int min, int max)
{

int *array;
int i, size;

if (min > max)
return (NULL);

size = ((max - min) + 1);

array = malloc(sizeof(int) * size);

if (array == NULL)
return (NULL);

for (i = 0; i < size; i++, min++)
{
array[i] = min;
}

return (array);

}
