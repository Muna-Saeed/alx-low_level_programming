#include "lists.h"

/**
 * sum_listint - returns the sum of all the data(n) in a listint_t linked list
 * @head: first node in the linked list
 *
 * Return: resulting sum, returns 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
