#include "search_algos.h"
/**
 * b_search - A function that searches for a value in a sorted
 *     array of integers using the Binary search algorithm
 * @array: Pointer to the first element of the array to search
 * @low: Left index in the array
 * @high: right index in the array
 * @value: Value to search for in the array
 * Return: The first index where value is located
 * or -1 if value is not found or if array is NULL
 */
int b_search(int *array, size_t low, size_t high, int value)
{
	size_t left = low;
	size_t right = high - 1;
	size_t middle = 0;
	size_t i = 0;

	if (array != NULL)
	{
		while (left <= right)
		{
			middle = (left + right) / 2;
			printf("Searching in array: ");
			for (i = left; i < right; i++)
			{
				printf("%d, ", array[i]);
			}
			printf("%d\n", array[i]);
			if (array[middle] < value)
			{
				left = middle + 1;
			}
			else if (array[middle] > value)
			{
				right = middle - 1;
			}
			else
			{
				return (middle);
			}
		}
	}
	return (-1);
}
/**
 * exponential_search - A function that searches for a value in a sorted array
 *    of integers using the Exponential search algorithm
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in array
 * @value: Value to search for in the array
 * Return: The first index where value is located
 * or -1 if value is not found or if array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t range = 1, min = 0;
	int result;

	if (array != NULL)
	{
		while (range < size && array[range] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", range, array[range]);
			range *= 2;
		}
		if (range + 1 < size)
			min = range + 1;
		else
			min = size;
		printf("Value found between indexes [%lu] and [%lu]\n", range / 2, min - 1);
		result = b_search(array, range / 2,  min, value);
		if (result != -1)
			return (result);
	}
	return (-1);
}
