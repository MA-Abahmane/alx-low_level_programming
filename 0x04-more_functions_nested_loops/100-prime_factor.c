#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * main - print the factor of the number 612852475143
 *
 * Return: None
 */

void main(void)
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
}
