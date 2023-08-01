#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the beginning of the linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *current = head;
	listint_t *next_ptr = head;

	if (!head)
		return (NULL);

	while (current && next_ptr && next_ptr->next)
	{
		next_ptr = next_ptr->next->next;
		current = current->next;
		if (next_ptr == current)
		{
			current = head;
			while (current != next_ptr)
			{
				current = current->next;
				next_ptr = next_ptr->next;
			}
			return (next_ptr);
		}
	}

	return (NULL);
}
