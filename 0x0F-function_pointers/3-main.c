#include "3-calc.h"

/**
 * main - simple operations
 * @argc: argument can
 * @argv: argument values
 * Return: Always 0.
 */

int main(int argc, char **argv)
{

if (argc != 4)
{
printf("Error\n");
exit(98);
}

printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
return (0);

}
