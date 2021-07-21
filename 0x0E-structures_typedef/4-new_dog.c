#include "dog.h"
#include <stdlib.h>

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
return (NULL);

d->name = name;
d->age = age;
d->owner = owner;

return (d);

}
