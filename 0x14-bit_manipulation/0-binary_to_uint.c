#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - convert binary to int
 * @b: binary data
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{

unsigned int dec = 0;
int i = 0;

if (b == NULL)
return (0);

for (i = 0; b[i] != '\0'; i++)
{
if (b[i] != '0' && b[i] != '1')
return (0);
}

for (i = 0; b[i] != '\0'; i++)
{
dec <<= 1;
if (b[i] == '1')
dec += 1;
}

return (dec);

}
