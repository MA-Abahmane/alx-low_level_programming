#include<stdlib.h>
#include<stdio.h>
#define x "%02hhx"

/**
 * main - a program that prints the opcodes of its own main function.
 * @argc: the number given of parameters.
 * @argv: the given parameters.
 *
 * Return: 0 if all condition passed with success
 */

int main(int argc, char *argv[])
{
int i, num;

if (argc != 2)
{
printf("Error\n");
return (1);
}

num = atoi(argv[1]);
if (num < 0)
{
printf("Error\n");
exit(2);
}

i = 0;
while (i < num)
{
printf(x, *((char *)main + i));

if (i < (num - 1))
putchar(' ');
else
putchar('\n');
++i;
}

return (0);
}
