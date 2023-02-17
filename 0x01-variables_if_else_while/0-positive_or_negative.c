#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: 'make random num and print its diecription'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
printf("%d %s", n "is positive\n");
else if (n < 0)
printf("%d %s", n "is negative\n");
else
printf("%d %s", n "is zero\n");
return (0);
}
