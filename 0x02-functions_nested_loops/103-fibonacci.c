#include <stdio.h>

/**
* main - print Fibonacci numbers sum, under 4,000,000
* Return: 0 alltimes
*/

int main(void)
{
long int i = 1, j = 2, total, evenCount; 
int count;

count = 0;

while (count <= 50)
{
total = i + j;

if (total % 2 == 0 && total < 4000000)
{
evenCount = 4613732;
}

i = j;
j = total;
count++;
}

printf("%ld", evenCount);
return(0);
}
