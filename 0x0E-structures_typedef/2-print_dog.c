#include <stdio.h>
#include <math.h>
#include "dog.h"
/**
 * print_dog -  a function that prints a struct dog
 * @d: given structure to print
 */

void print_dog(struct dog *d)
{
if (d->name == NULL)
d->name = "(nil)";
if (d->owner == NULL)
d->owner = "(nil)";

if (d != NULL)
{
if (d->age)
{
printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
else
{
printf("Name: %s\nAge: (nil)\nOwner: %s\n", d->name, d->owner);
}
}
}
