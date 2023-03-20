#include <stdio.h>
#include "dog.h"
/**
 * init_dog -a function that initialize a variable of type struct dog
 * @name: dog name
 * @owner: the dogs owner name
 * @age: dogs age
 * @d: given structure
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
