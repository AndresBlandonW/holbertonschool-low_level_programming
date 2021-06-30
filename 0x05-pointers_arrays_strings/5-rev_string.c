#include "holberton.h"

/**
* rev_string - in reverse
* @s: string
*/

void rev_string(char *s)
{

char st[] = *s;
int i, j;
int len = 0;


while (s[len] != '\0')
{
len++;
}
j = len - 1;


for (i = 0; i < len; i++)
{
_putchar(s[j]);
j--;
}

}
