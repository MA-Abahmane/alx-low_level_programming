#include <stdio.h>
#include <math.h>
#include "dog.h"

/**
 * print_dog -  a function that prints a struct dog
 * @d: given structure to print
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
if (!d->name)
d->name = "(nil)";
if (!d->owner)
d->owner = "(nil)";

printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
}
