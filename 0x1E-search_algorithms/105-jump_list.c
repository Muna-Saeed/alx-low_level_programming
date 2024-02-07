#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list using Jump search
 * @list: Pointer to the head of the list to search in
 * @size: Number of nodes in the list
 * @value: Value to search for
 *
 * Return: A pointer to the first node where value is located,
 * or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i, jump_step;
	listint_t *prev, *current;

	if (list == NULL)
		return (NULL);

	jump_step = sqrt(size);
	prev = NULL;
	current = list;

	while (current && current->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);

		prev = current;
		for (i = 0; i < jump_step && current->next; i++)
			current = current->next;
	}

	printf(
			"Value found between indexes [%lu] and [%lu]\n", prev->index, current->index
			);

	while (prev && prev->index <= current->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);

		prev = prev->next;
	}

	return (NULL);
}
