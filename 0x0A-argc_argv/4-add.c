#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
* main - your name
* @argc: argument can
* @argv: argument values
*
* Return: 0
*/

int main(int argc, char *argv[])
{

int i, j, len, val;
int result = 0;

if (argc == 1)
printf("0\n");
else
{
for (i = 1; i < argc; i++)
{
len = strlen(argv[i]);
for (j = 0; j < len; j++)
{
val = argv[i][j];
if (!isdigit(val))
{
printf("Error\n");
return (1);
}
}
if (atoi(argv[i]) < 0)
{
continue;
}
else
{
result += atoi(argv[i]);
}
}
printf("%d\n", result);
}
return (0);

}
