#include <stdlib.h>
#include <stdio.h>

/**
 * main - The program that prints the numbers from 1 to 100
 * check for Fizz, Buzz, FizzBuzz
 * Return: None
 */

int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 5 == 0 && i % 3 == 0)
{
printf("FizzBuzz ");
}
else if (i % 3 == 0)
{
printf("Fizz ");
}
else if (i % 5 == 0)
{
if (i == 100)
{
printf("Buzz\n");
}
else
{
printf("Buzz ");
}
}
else
{
printf("%d ", i);
}
}
return (0);
}
