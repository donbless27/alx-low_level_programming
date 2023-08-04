#include "main.h"

/**
 * clear_bit - function that sets the value of
 *   a bit to 0 at a given index
 * @n: number
 * @index: the index, starting from 0 of the bit i want to set
 * Return: 1 if success, or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int numb = 1;

	if (index > (sizeof(unsigned long int) * 8))

		return (-1);
	/*bitwise NOT unary operator*/
	numb = ~(numb << index);/* then use the () to nest the left shift operator*/
	*n = *n & numb;

	return (1);

}
