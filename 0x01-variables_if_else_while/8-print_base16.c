#include <stdio.h>

/**
* main - all numbers of base 16
*
* Return: 0
*/
int main(void)
{
int i;
char c;

i = 48;
while  (i < 58)
{
putchar(i);
i++;
}

c = 'a';
while (c <= 'f')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
