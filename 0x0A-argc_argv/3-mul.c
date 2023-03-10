#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the sum of 2 given nums.
 * @argc: arguement count
 * @argv: array of pointers to arguement strings
 * Return: 1 if numbers not given/ else Always 0
 **/

int main(int argc, char *argv[])
{
int x, y, multi;

if (argc <= 2)
{
printf("Error\n");
return (1);
}

x = atoi(argv[1]);
y = atoi(argv[2]);

multi = (x *y);

printf("%d\n", multi);
return (0);
}
