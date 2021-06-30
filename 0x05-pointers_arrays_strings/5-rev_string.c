#include "holberton.h"

/**
* rev_string - in reverse
* @s: string
*/

void rev_string(char *s)
{

int i, j;
int len = 0;
char temp;

while (s[len] != '\0')
{
len++;
}
j = len - 1;


for (i = 0; i < len; i++)
{
temp = s[j];
s[j] = s[i];
s[i] = temp;
j--;

if (j == (len / 2))
{
break;
}

}

}
