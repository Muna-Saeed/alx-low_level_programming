#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: first node in the linked list
 * @index: index of the node to return, starting at 0
 *
 * Return: returns NULL if the pointer doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    for (; head != NULL && index > 0; head = head->next, index--) ;
    return (head);
}
