#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a  list
 * @head: Pointer to the head of the list
 * @index: index of the node to retrieve
 *
 * Return: rointer to the nth node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	listint_t *current;

	current = head;

	for (i = 0; current != NULL && i < index; i++)
		current = current->next;

	if (current == NULL)
		return (NULL);

	return (current);
}

