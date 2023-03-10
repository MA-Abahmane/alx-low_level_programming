#include <stdio.h>
#include <stdlib.h>

/**
* main - a program that prints the minimum.
* number of coins to make change for an 
* amount of money.
* @argc: arguement count.
* @argv: array of pointers to arguement strings.
* Return: return the number of change or/
* 1 if the number of arguments passed 
* to the program is not exactly 1.
**/

int main(int argc, char *argv[])
{
int change, n;

if (argc != 2)
{
printf("Error\n");
return (1);
}

n = atoi(argv[1]);
change = 0;

if (n > 25)
{
while (n >= 25)
n -= 25, change++;
}

if (n > 5 && n < 10)
{
while (n >= 5)
n -= 5, change++;
}

if (n > 2 && n < 5)
{
while (n >= 2)
n -= 2, change++;
}

if (n > 10 && n < 25)
{
while (n >= 10)
n -= 10, change++;
}

if (n == 1 || n == 2 || n == 5 ||
n == 10 || n == 25)
{
change++;
}

printf("%d\n", change);
return (0);
}
