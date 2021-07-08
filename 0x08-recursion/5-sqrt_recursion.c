#include "holberton.h"

/**
 * sqrt_check - checks for the square
 * @i: data
 * @num: number to find
 *
 * Return: sqrt
 */

int sqrt_check(int i, int num)
{
if (i * i == num)
{
return (i);
}

if (i * i > num)
{
return (-1);
}

return (sqrt_check(i + 1, num));
}

/**
 * _sqrt_recursion - natural squeare
 * @n: number
 *
 * Return: sqrt
 */

int _sqrt_recursion(int n)
{
if (n == 0)
{
return (0);
}

return (sqrt_check(1, n));
}
