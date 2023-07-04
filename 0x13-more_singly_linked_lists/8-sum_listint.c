#include "lists.h"

/**
 * sum_listint - returns the sum of all the data list.
 * @head: head of the list
 *
 * Return: sum of all the data, or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *current;

	current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}

