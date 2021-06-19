#include <stdio.h>

/**
* main - print alphabetic lowercase and uppercase
*
* Return: 0
*/
int main(void)
{
char alp;
char alpMayus;

for (alp = 'a' ; alp <= 'z' ; alp++)
{
putchar(alp);
}

for (alpMayus = 'A' ; alpMayus <= 'Z' ; alpMayus++)
{
putchar(alpMayus);
}

putchar('\n');
return (0);
}
