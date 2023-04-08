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
printf("%B", num);
}
