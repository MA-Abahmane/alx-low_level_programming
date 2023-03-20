#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - a function that frees the structure
 * dogs.
 * @d: given structure to free
 */
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
