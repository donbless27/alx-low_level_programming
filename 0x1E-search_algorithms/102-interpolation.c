#include "search_algos.h"

/**
 * interpolation_search - A function that searches for a value in a sorted array
 *       of integers using the Interpolation search algorithm.
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for in the array
 * Return: The first index where value is located
 * or -1 if value is not found or if array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t p = 0;

	if (array != NULL)
	{
		while ((array[high] != array[low]) &&
		       (value >= array[low]) &&
		       (value <= array[high]))
		{
			p = low + (((double)(high - low) / (array[high] - array[low])) *
				     (value - array[low]));
			printf("Value checked array[%lu] = [%d]\n", p, array[p]);
			if (array[p] < value)
				low = p + 1;
			else if (value < array[p])
				high = p - 1;
			else
				return (p);
		}
		if (value == array[low])
			return (low);
		p = low + (((double)(high - low) / (array[high] - array[low]))
			     * (value - array[low]));
		printf("Value checked array[%lu] is out of range\n", p);
	}
	return (-1);
}
