#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - 2 dim array
 * @width: width
 * @height: height
 * Return: pointer 2 dim
 */

int **alloc_grid(int width, int height)
{

int **array;
int i, j;

if (width < 1 || height < 1)
return (NULL);

array = malloc(sizeof(int *) * height);

if (array == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
array[i] = malloc(width * sizeof(int));
if (array[i] == NULL)
{
for (; i >= 0; i--)
{
free(array[i]);
}
free(array);
return (NULL);
}
}


for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
array[i][j] = 0;
}
}

return (array);

}
