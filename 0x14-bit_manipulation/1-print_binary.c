#include "main.h"

/**
 * print_binary - a function that prints the binary
 *   representation of a number.
 * @n: given number to convert to binary.
 *
 * Return: None
 */

void print_binary(unsigned long int n)
{
unsigned long int num = n;

/* shift number until it becomes zero or one*/
if (num > 1)
print_binary(num >> 1);

/* print the binary in num*/
if (num & 1)
putchar('1');
else
putchar('0');

}
