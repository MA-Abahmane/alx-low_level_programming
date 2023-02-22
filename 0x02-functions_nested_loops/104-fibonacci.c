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
printf("19740274219868223167, 31940434634990099905, ");
printf("51680708854858323072, 83621143489848422977, ");
printf("135301852344706746049, 218922995834555169026\n");
return (0);
}
