#include "holberton.h"
#include <stdio.h>

/**
* main - your name
* @argc: argument can
* @argv: argument values
*
* Return: 0
*/

int main(int argc, char **argv)
{

int can = 0;
int i;

for (i = 1; i < argc; i++)
{
can++;
}

printf("%d\n", can);
(void) argv;
return (0);
}
