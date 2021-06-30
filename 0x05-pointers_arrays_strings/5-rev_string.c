#include "holberton.h"

/**
* rev_string - in reverse
* @s: string
*/

void rev_string(char *s)
{


int len, i, half, len2, i2;
char temp;

len2 = 0;
for (i = 0; s[i] != 0; i++)
{
len2++;
}

len = len2 - 1;
i2 = 0;
half = len2 / 2;
while (i2 < half)
{
temp = s[i2];
s[i2] = s[len];
s[len] = temp;
i2++;
len--;
}

}
