#include "main.h"

/**
 * get_endianness - function that checks the endianness of a number.
 * Return: 0 If big endian, 1 if little endian
 */
int get_endianness(void)
{
	int numb = 1;
	char *endian = (char *)&numb;

	if (*endian == 1)
		return (1);
	return (1);
}
