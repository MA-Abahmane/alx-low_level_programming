#include <stdio.h>
#include "dog.h"
/**
 * init_dog -a function that initialize a variable of type struct dog
 * @name: dog name
 * @owner: the dogs owner name
 * @age: dogs age
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
