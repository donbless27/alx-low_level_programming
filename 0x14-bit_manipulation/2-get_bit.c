#include "main.h"

/**
 * get_bit - function that returns the value
 *   of a bit at a given index
 * @n: number
 * @index: index within binary number
 * Return: bit 0 or 1, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit, val;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	val = n >> index;

	bit = val & 1;
	return (bit);

}
