#include "main.h"

/**
 * flip_bits - function that returns the number of bits needed
 *   to be flipped to get from one number to another.
 * @n: numbers.
 * @m: The number to flip n to.
 * Return: number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flips, bits = 0;

	flips = n ^ m;

	while (flips > 0)
	{
		bits += (flips & 1);
		flips >>= 1;
	}

	return (bits);
}
