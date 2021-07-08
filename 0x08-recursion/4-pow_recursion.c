#include "holberton.h"

/**
 * _pow_recursion - raised to the power
 * @x: raised
 * @y: power
 *
 * Return: raised
 */

int _pow_recursion(int x, int y)
{

if (y > 0)
{
return (x * _strlen_recursion(x, y - 1));
}
else if (y < 0)
{
return (-1);
}
else
return (1);

}
