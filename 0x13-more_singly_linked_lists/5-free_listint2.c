#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - free a listint_t list set head NULL
 * @head:  head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}

	*head = NULL;
}
