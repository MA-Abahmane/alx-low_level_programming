#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * findNum - a program that find out if string 
 * contains only nums.
 * @s: given string to ckeck
 * Return: return the char if its a number
 * else return -1
 **/

int findNum(char *s)
{
int n, i, len;

n = 0;
i = 0;

len = strlen(s);
while (i < len)
{
if (s[i] < '0' || s[i] > '9')
{
return (-1);
}
else
n = n * 10 + (s[i] - '0');
i++;
}
return (n);
}

/**
 * main - a program that prints the sum of given nums.
 * @argc: arguement count
 * @argv: array of pointers to arguement strings
 * Return: If input not a number return 1
 * else return 0
 **/

int main(int argc, char *argv[])
{
int i, sum , num;

sum = 0;
for (i = 1; i < argc; i++)
{
num = findNum(argv[i]);

if (num == -1)
{
printf("Error\n");
return (1);
}

sum += num;
}

printf("%d\n", sum);
return (0);
}
