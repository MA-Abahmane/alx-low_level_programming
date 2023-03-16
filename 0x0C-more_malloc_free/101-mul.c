#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * num_finder - a program that find out if string
 * contains only nums.
 * @s: given string to ckeck
 * Return: return the char if its a number
 * else return -1
 **/

int num_finder(char *s)
{
int n, i, len;

n = 0;
i = 0;

len = strlen(s);
while (i < len)
{
if (s[i] < '0' || s[i] > '9')
{
return (NULL);
}
else
n = n * 10 + (s[i] - '0');
i++;
}
return (n);
}

/**
 * main -a program that multiplies two positive numbers.
 * @argv: Given array from function input parameters
 * @argc: array size
 * Return: Print the result of the multiplication of two given numbers
 * if no errors are encountered
 */

int main(int argc, char *argv[])
{
unsigned int num1, num2, mul;

if (argc > 3 || argc < 3)
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
exit(98);
}

num1 = num_finder(argv[1]);
num2 = num_finder(argv[2]);

if (num1 == NULL || num2 == NULL)
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
exit(98);
}
  
if (num1 == 0 || num2 == 0)
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
exit(98);
}

mul = num1 * num2;
  
return (0);
}
