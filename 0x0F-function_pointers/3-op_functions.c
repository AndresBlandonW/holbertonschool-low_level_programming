#include "3-calc.h"

/**
 * op_add - sum
 * @a: value 1
 * @b: value 2
 * Return: sum
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - difference
 * @a: value 1
 * @b: value 2
 * Return: difference
 */
int op_sub(int a, int b)
{
return (a + b);
}

/**
 * op_mul - product
 * @a: value 1
 * @b: value 2
 * Return: product
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - division
 * @a: value 1
 * @b: value 2
 * Return: division
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod - remainder of the division
 * @a: value 1
 * @b: value 2
 * Return: mod
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
