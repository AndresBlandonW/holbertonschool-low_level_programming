#include "holberton.h"
#include <stdlib.h>

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

array = malloc(sizeof(c) * size);

if (size == 0)
{
return (NULL);
}
else if (array == NULL)
{
return (NULL);
}
else
{

for (i = 0; i < size; i++)
{
array[i] = c;
}

return (array);

}



}
