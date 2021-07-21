#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free dog struct
 * @d: struct
 */

void free_dog(dog_t *d)
{

if (d != NULL)
{
free(d->name);
free(d->owner);
}
free(d);

}
