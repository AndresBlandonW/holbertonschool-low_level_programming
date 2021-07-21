#include "dog.h"
#include <stdlib.h>
char *_strdup(char *str);

/**
 * new_dog - initialize
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{

dog_t *d;

d = malloc(sizeof(dog_t));

if (d == NULL)
{
free(d);
return (NULL);
}
d->name = _strdup(name);
if (!d->name)
{
free(d);
return (NULL);
}

d->age = age;
d->owner = _strdup(owner);
if (!d->owner)
{
free(d->name);
free(d);
return (NULL);
}

return (d);

}

/**
 * _strdup - pointer to a newly
 * @str: pointer
 *
 * Return: pointer
 */

char *_strdup(char *str)
{

char *cpy;
int i = 0;

if (str == NULL)
{
return (NULL);
}

while (str[i] != 0)
{
i++;
}

i++;
cpy = malloc(sizeof(char) * i);

for (i = 0; str[i] != 0; i++)
{
cpy[i] = str[i];
}

cpy[i] = 0;

return (cpy);
}
