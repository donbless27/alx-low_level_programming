#include "main.h"

/**
 * binary_to_uint- convert binary to unsigned int
 * @b: binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{

	int string = 0, j;
	unsigned int result = 0, non_binary = 0;

	if (b == NULL)
		return (non_binary);

	while (b[string] != '\0')
		string++;
	string -= 1;
	j = 0;
	while (b[j])
	{
		if ((b[j] != '0') && (b[j] != '1'))/*&& logical AND operator*/
			return (non_binary);

		if (b[j] == '1')
			result += (1 * (1 << string));/*<< bitwise left shift operator*/
		j++;

		string--;
	}
	return (result);
}
