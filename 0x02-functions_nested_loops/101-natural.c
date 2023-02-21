#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return:  0
 */
int main(void)
{
int i = 0;

while (i < 1024)
{
if (i % 5 == 0 || i % 3 == 0)
{
i = i;
}
}
printf("%d", i);

return (0);
}
