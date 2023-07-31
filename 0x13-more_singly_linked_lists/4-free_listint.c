#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head:the head of the listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
