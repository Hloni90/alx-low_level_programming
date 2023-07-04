#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a list
 *and return the head node's data
 * @head: double pointer to the head of the list
 * Return: the data of the deleted head node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int data;

	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (0);

	tmp = *head;

	data = tmp->n;

	*head = tmp->next;
	free(tmp);

	return (data);
}
