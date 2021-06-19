#include <stdio.h>

/**
* main - print numbers with putchar
*
* Return: 0
*/
int main(void)
{
int x;
x = 48;

while  (x < 58)
{
putchar(x);
x++;
}

putchar('\n');
return (0);
}
