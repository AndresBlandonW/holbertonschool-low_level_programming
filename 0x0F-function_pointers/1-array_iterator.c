#include "function_pointers.h"

/**
 * array_iterator - given as a parameter
 * @array: array
 * @size: size of array
 * @action: pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

unsigned int i;

if (array && action)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}

}
