#include <stdio.h>
#include <stdlib.h>
/**
* main - a program that prints the minimum number of coins to make change.
* @argc: arguement count.
* @argv: array of pointers to arguement strings.
* Return: 1 or change
**/
int main(int argc, char *argv[])
{
int m, change;

if (argc != 2)
{
printf("Error\n");
return (1);
}

m = atoi(argv[1]);
change = 0;

if (m > 25)
{
while (m >= 25)
m -= 25, change++;
}
if (m > 10 && m < 25)
{
while (m >= 10)
m -= 10, change++;
}
if (m > 5 && m < 10)
{
while (m >= 5)
m -= 5, change++;
}
if (m > 2 && m < 5)
{
while (m >= 2)
m -= 2, change++;
}

if (m == 1 || m == 2 || m == 5 ||
m == 10 || m == 25)
{
change++;
}

printf("%d\n", change);
return (0);
}
