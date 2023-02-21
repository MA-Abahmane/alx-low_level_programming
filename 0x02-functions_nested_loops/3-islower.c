#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Description: [program checks if given char is lower case or upper cased]
 *
 * Return: Always 0
 * 
 * code by: MAAbahmane
 */

int _islower(int c);

int main(void)
{
char c;

printf("%d",_islower(c));
return (0);
}

int _islower(int c)
{
if (islower(97))
{
return (1);
}
else
{
return (0);
}
}
