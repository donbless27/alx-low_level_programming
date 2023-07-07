#include "main.h"
#include <string.h>

/**
  * binary_to_uint - function that converts a binary
  * number to an unsigned int.
  * @b: binary pointer to a string
  * Return: unsigned int
  */
unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
	{
		return (0);
	}
	size_t length = strlen(b);
	unsigned int result = 0;

	for (size_t i = 0; i < length; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);  /** Invalid character found, return 0 */
		}
		result = (result << 1) + (b[i] - '0');
	}
	return (result);
}

#include <stdio.h>

/**
  * main - the main function that generaes the codes
  * @n: numbers to be printed out
  * Return: 0
  */
int main(void)
{
	unsigned int n;

	n = binary_to_uint("1");
	printf("%u\n", n);
	n = binary_to_uint("101");
	printf("%u\n", n);
	n = binary_to_uint("1e01");
	printf("%u\n", n);
	n = binary_to_uint("1100010");
	printf("%u\n", n);
	n = binary_to_uint("0000000000000000000110010010");
	printf("%u\n", n);
	return (0);
}

