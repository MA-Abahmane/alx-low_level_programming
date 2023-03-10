#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: arguement count
 * @argv: array of pointers to arguement strings
 * Return: return 0
 **/

int main(int argc, char *argv[])
{
printf("%s\n%d", *argv, argc - 1);
return 0;
}
