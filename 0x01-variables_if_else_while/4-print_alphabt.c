#include <stdio.h>

/**
* main - print alphabetic except 2 letters
*
* Return: 0
*/
int main(void)
{
char alp;

for (alp = 'a' ; alp <= 'z' ; alp++)
{
if (alp != 'q' && alp != 'e')
{
putchar(alp);
}
}

putchar('\n');
return (0);
}
