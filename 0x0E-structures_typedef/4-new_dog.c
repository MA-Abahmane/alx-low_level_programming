#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * stringer - a function that creates a copy out of
 * a given string.
 * @s: given string to copy
 * Return: return the copy
 */

char *stringer(char *s)
{
int i, len;
char *str;

len = strlen(s) + 1;
str = malloc(sizeof(char) * len);

if (str == NULL)
return (NULL);

i = 0;
while (s[i] != '\0')
{
str[i] = s[i];
++i;
}
str[i] = '\0';
return (str);
}

/**
 * new_dog - a function that creates a new dog.
 * dogs.
 * @name: dog name
 * @age: dog age
 * @owner: owners name
 * Return: Pointer to the structure copy
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *ptr;
ptr = malloc(sizeof(dog_t));

if (ptr == NULL)
{
return (NULL);
}

ptr->name = stringer(name);
if (!name)
{
free(ptr);
free(owner);
return (NULL);
}
ptr->owner = stringer(owner);
if (!owner)
{
free(ptr);
free(name);
return (NULL);
}

ptr->age = age;

return (ptr);
}
