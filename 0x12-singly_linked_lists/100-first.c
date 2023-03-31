#include "lists.h"

/**
 * startup_Fun - a function that executes before the main.
 *
 * Return: None.
 */

void startup_Fun(void) __attribute__ ((constructor));

void startup_Fun(void)
{
printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
