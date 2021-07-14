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
array = malloc(sizeof(c) * size);

for (i = 0; i < size; i++)
{
array[i] = c;
}

return (array);

}



}
