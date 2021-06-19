#include <stdio.h>

/**
* main - all possible combinations
*
* Return: 0
*/
int main(void)
{

int i;
i = 48;

while (i < 58)
{
putchar(i);

if (i != 57)
{
putchar(44);
putchar(' ');
}

i++;
}

printf("\n");
return (0);
}
