#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - create a array
 * @size: size
 * @c: data
 *
 * Return: array
 */

char *create_array(unsigned int size, char c)
{

char *array;
unsigned int i;

if (size == 0)
{
return (NULL);
}
else
{
array = malloc(sizeof(c) * size);
array[0] = c;

for (i = 0; i < size; i++)
{
array[i] = c;
}

return (array);

}



}
