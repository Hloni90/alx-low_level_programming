#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts new node at a given position in a list
 * @head: pointer to the head of the list
 * @idx: index at which the new node should be inserted
 * @n: value to be assigned to the new node
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;

	listint_t *newNode, *current;

	if (head == NULL)
		return (NULL);
	if (idx == 0)
	{
		newNode = malloc(sizeof(listint_t));
		if (newNode == NULL)
			return (NULL);

		newNode->n = n;
		newNode->next = *head;
		*head = newNode;

		return (newNode);
	}

	current = *head;

	for (i = 0; current != NULL && i < idx - 1; i++)
		current = current->next;
	if (current == NULL || current->next == NULL)
		return (NULL);

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = current->next;
	current->next = newNode;
	return (newNode);
}

