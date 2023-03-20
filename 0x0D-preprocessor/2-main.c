#include <stdio.h>
#define N __FILE__

/**
 * main - a program that prints the name of the
 * file it was compiled from, followed by a new line.
 *
 * Return: 0.
 */

int main(void)
{
printf("%s\n", N);
return (0);
}
