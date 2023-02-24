#include "main.h"

/**
 * print_number - print the number given
 * @n : given number
 *
 *
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		putchar(45);
		i = -i;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	putchar(i % 10 + '0');
	return;
}
