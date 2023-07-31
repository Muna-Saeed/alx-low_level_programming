#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: returns 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *start;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	start = (*head)->next;
	free(*head);
	*head = start;

	return (num);
}
