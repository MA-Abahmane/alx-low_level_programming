#include <stdio.h>

/**
* main - print Fibonacci numbers starting from 1, 2
* Return: 0 alltimes
*/

int main(void)
{
unsigned long int i = 1, j = 2, total;
int count;

count = 0;

printf("%lu, %lu, ", i, j);
while (count < 90)
{

total = i + j;
printf("%lu, ", total);
i = j;
j = total;
count++;
}
return (0);
}
