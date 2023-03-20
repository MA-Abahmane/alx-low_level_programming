#include <stdio.h>
#include "dog.h"

/**
 * free_dog - a function that frees the structure 
 * dogs.
 * @d: given structure to free
 */

void free_dog(dog_t *d);
{

if (d != NULL)
{
free(d->name);
free(d->age);
free(d->owner);
}
}
