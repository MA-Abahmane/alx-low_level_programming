#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * num_finder - a program that find out if string
 * contains only nums.
 * @s: given string to ckeck
 * Return: return the char if its a number
 * else return 777
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
return (777);
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
long long int num1, num2, mul;

if (argc != 3)
{
printf("Error\n");
exit(98);
}

num1 = num_finder(argv[1]);
num2 = num_finder(argv[2]);

if (num_finder(argv[1]) == 777 || num_finder(argv[2]) == 777)
{
printf("Error\n");
exit(98);
}

mul = num1 *num2;
printf("%lld\n", mul);
return (0);
}
