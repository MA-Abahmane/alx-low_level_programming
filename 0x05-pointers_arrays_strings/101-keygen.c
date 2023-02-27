#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - make a random password
 *
 * Return: 0
 */

int main(void)
{
int i, j, num = 0;
int pass[1000];	

srand(time(NULL));
for (i = 0; i < 100; i++)
{
pass[i] = rand() % 78;
num += (pass[i] + '0');
putchar(pass[i] + '0');
if ((2772 - num) - '0' < 78)
{
j = 2772 - num - '0';
num += j;
putchar(j + '0');
break;
}
}
return (0);
}
