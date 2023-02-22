#include <stdio.h>

/**
* main - print Fibonacci numbers starting from 1, 2
* Return: 0 alltimes
*/

int main(void)
{
long long int i = 1, j = 2, total;
int count;
  
count = 0;

printf("%llu, %llu, ", i, j);
while (count <= 95)
{

total = i + j;
printf("%llu, ", total);
i = j;
j = total;
count++;
}
    
return (0);
}

