#include "main.h"
#include <stdio.h>

/**
 * reverse_array - a function that reverses the
 *		content of an array of integers
 * @a: pointer to int array
 * @n: is the number of elements of the array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int temp, x, z;

	x = 0;
	z = n - 1;
	/**
	 * set value in array a in temp
	 * then place the last array in
	 * the first array then place
	 * value in temp to last array
	 */
	while (x < z)
	{
		temp = a[x];
		a[x] = a[z];
		a[z] = temp;
		x++;
		z--;
	}
}
