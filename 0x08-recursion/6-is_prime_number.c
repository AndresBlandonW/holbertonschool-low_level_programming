#include "holberton.h"

/**
 * prime - rif prime
 * @i: start
 * @num: max value
 *
 * Return: if prime
 */
int prime(int i, int num)
{
if (num == i)
{
return (1);
}
else if (num % i == 0)
{
return (0);
}
else if (num > i)
{
return (prime(i + 1, num));
}

return (0);
}

/**
 * is_prime_number - is a prime number
 * @n: number
 *
 * Return: priem number
 */

int is_prime_number(int n)
{

if (n < 2)
{
return (0);
}
else if (prime(3, n) == 0)
{
return (0);
}

return (1);

}
