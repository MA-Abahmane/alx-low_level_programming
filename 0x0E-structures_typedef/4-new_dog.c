#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - a function that creates a new dog.
 * dogs.
 * @d: given structure to copy
 */

dog_t *new_dog(char *name, float age, char *owner)
{

dog_t *ptr;
ptr = malloc(sizeof(dog_t));
  
if (ptr == NULL)
{
return (NULL);
}

if (name == NULL)
{
  free(ptr);
  free(owner);
  return (NULL);
}

if (owner == NULL)
{
  free(ptr);
  free(name);
  return (NULL);
}

ptr->name = name;
prt->age = age;
ptr->owner = owner;

return (ptr)
}
