#include "holberton.h"

/**
 * _strlen - len of string
 * @s: string
 *
 * Return: len
 */
int _strlen(char *s)
{
int len = 0;

while (*(s + len) != 0)
{
len++;
}
return (len);
}

/**
 * cap_string -  capitalizes all words of a a
 * @a: array
 * Return: capitalizes all words
 */

char *cap_string(char *a)
{

int count = 0;
int len = _strlen(a);

if (a[count] >= 'a' && a[count] <= 'z')
{
a[count] -= 32;
}

while (count < len)
{
while (a[count] == ' ' || a[count] == '\n' || a[count] == '\t' ||
a[count] == ',' || a[count] == ';' || a[count] == '.' ||
a[count] == '!' || a[count] == '?' || a[count] == '"' ||
a[count] == '(' || a[count] == ')' || a[count] == '{' ||
a[count] == '}')
{
count++;

if (a[count] >= 'a' && a[count] <= 'z')
{
a[count] -= 32;
}
}
count++;
}
return (a);

}
