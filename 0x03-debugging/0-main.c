#include "holberton.h"

/**
* positive_or_negative - tests function that prints
* @i: value
*/

void positive_or_negative(int i)
{

if (i < 0)
{
printf("%d is negative", i);
}
else if (i > 0)
{
printf("%d is positive", i);
}
else
{
printf("%d is zero", i);
}

}
