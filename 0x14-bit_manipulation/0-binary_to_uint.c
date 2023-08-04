#include "main.h"

/**
 * binary_to_uint- a function that converts a binary
 *    number to an unsigned int
 * @b: binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{

	int convert = 0, i;
	unsigned int number = 0, non_binary = 0;

	if (b == NULL)
		return (non_binary);

	while (b[convert] != '\0')
		convert++;
	convert -= 1;
	i = 0;
	while (b[i])
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (non_binary);

		if (b[i] == '1')
			number += (1 * (1 << convert));/*<< bitwise left shift operator*/
		i++;

		convert--;
	}
	return (number);
}
