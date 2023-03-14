#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * argstostr - a function that concatenates all the arguments
 * of a given program.
 *
 * @ac: given message size
 * @**av: given message char
 *
 * Return: "NULL" if ac is 0 or *av is NULL/ else return the filles
 * memory location.
 */

char *argstostr(int ac, char **av)
{
char *args_list, *ar;
size_t len = 0;
unsigned int i;

if (ac == 0 || av == NULL)
{
return NULL;
}

for (i = 1; i < ac; i++)
{
len += strlen(av[i]);
}
   
args_list = ar = (char *)malloc(len + ac - 1);

for (i = 1; i < ac; i++)
{
memcpy(args_list, av[i], strlen(av[i]));
args_list += strlen(av[i])+1;
*(args_list-1) = '\n';
}
*(args_list-1) = 0;

return (ar);
}
