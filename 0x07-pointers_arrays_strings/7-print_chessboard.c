#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_chessboard -a function that prints the chessboard.
 * @a: Given chess table string
 * Return: NONE
 */

void print_chessboard(char (*a)[8])
{
int i, j;

i = 0;
while (i < 8)
{
j = 0;
while (j < 8)
{
printf("%c", a[i][j]);
++j;
}
++i;
}
return;
}
