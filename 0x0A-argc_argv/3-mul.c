#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - your name
* @argc: argument can
* @argv: argument values
*
* Return: 0
*/

int main(int argc, char **argv)
{

int result;

if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
result = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", result);
}

return (0);
}
