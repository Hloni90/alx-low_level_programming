#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add a new node at start of list
 * @head: pointer to head of list
 * @n: value to be added to the list
 *
 * Return: address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}

