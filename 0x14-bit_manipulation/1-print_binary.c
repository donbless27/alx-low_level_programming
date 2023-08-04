#include "main.h"
#include <stdio.h>

/**
 * print_binary - function that prints the binary
 *    representation of a number
 * @n: unsigned int
 * Return: binary
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		/*shifts all bits towards right by certain number 1 bits*/
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
