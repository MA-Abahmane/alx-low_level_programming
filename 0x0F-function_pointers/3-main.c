#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - a function that takes in an expression as
 *     Arguments and return the answer.
 * - works as a calculator.
 * @argc: given Arguments array size
 * @argv: given Arguments array
 * Return: the answer to the given expression
 */

int main(int argc, char **argv)
{
int i;
char op;
int (*op_check)(int,int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

op = *(argv[2]);
if ((op == '%' || op == '/') && !atoi(argv[3]))
{
printf("Error\n");
exit(100);
}

op_check = get_op_func(&op);
if (argv[2][1] != '\0' || op_check == NULL)
{
printf("Error\n");
exit(99);
}


int answer = op_check(atoi(argv[1]), atoi(argv[3]));
printf("%d\n", answer);
return(0);
}
