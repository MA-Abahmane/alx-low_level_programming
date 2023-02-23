#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

/**
 * main - print the factor of the number 612852475143
 *
 * Return: None
 */

int main(void)
{
unsigned long num = 612852475143;
int i;

for (i = (int) sqrt(num); i > 2; i++)
{
if (num % i == 0)
{

printf("%ld\n", i);
break;
}
}
return (0);
}
