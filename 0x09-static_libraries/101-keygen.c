#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - make a random password generator
 *
 * Return: 0
 */

int main()
{
int i, j, num = 0;
int Pw[1000];

srand(time(NULL));
for (i = 0; i < 100; i++)
{
Pw[i] = rand() % 78;
num += (Pw[i] + 48);
putchar(Pw[i] + 48);

if (78 > (2772 - num) - 48)
{
j = 2772 - num - 48;
putchar(j + 48);
num += j;
break;
}
}
return (0);
}
