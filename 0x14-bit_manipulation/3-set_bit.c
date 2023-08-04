#include "main.h"

/**
 * set_bit - function that sets the value of
 *    a bit to 1 at a given index
 * @n: number
 * @index: index within binary number
 * Return: 1 if success, or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int numb = 1;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	/*shift the value in set to the left by 1 bit.*/
	numb <<= index;/*numb <<= index is the same as numb = numb << index*/

	*n = *n | numb;
	return (1);
}
