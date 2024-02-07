#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * advanced_binary - Searches for the first occurrence of
 * a value in a sorted array
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The index where the value is located, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t i;
	int result;
	size_t mid;

	if (array == NULL)
		return (-1);

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i < size - 1)
			printf(", ");
		else
			printf("\n");
	}

	if (size == 1 && array[0] != value)
		return (-1);

	mid = (size - 1) / 2;
	if (array[mid] == value)
	{
		result = advanced_binary(array, mid + 1, value);
		if (result != -1)
			return (result);
		return (mid);
	}

	if (array[mid] < value)
	{
		return (advanced_binary(array + mid + 1, size - mid - 1, value) + mid + 1);
	}

	return (advanced_binary(array, mid, value));
}
