#include<stdlib.h>
#include<stdio.h>

/**
 * main - a program that prints the opcodes of its own main function.
 * @argc: the number given of parameters.
 * @argv: the given parameters.
 * 
 * Return: 0 in successful
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
printf("%02hhx", *((char *)main + i));

if (i < (num - 1))
printf(" ");
else
printf("\n");
++i;
}

return (0);
}
