#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a structure contaning dog info
 * @name: dog name
 * @owner: the dogs owner name
 * @age: dogs age
 */

typedef struct dog
{

char *name;
char *owner;
float age;
} dog_t;


/* :function prototypes: */
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
