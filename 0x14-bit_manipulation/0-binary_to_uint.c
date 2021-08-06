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

while (b[i] == '0' || b[i] == '1')
{
dec <<= 1;
dec += b[i] - '0';
i++;
}

return (dec);

}
