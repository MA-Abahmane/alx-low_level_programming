#include <stdio.h>

/**
 * main - a program that prints all arguments it receives.
 * @argc: arguement count
 * @argv: array of pointers to arguement strings
 * Return: Always 0
 **/

int main(int argc, char *argv[])
{
int i = 0;
while (i < argc)
{
printf("%s", argv[i]);
++i;
}
return 0;
}
