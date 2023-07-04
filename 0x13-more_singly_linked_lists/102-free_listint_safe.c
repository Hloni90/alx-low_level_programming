#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _ra - reallocate memory for an array of pointers
 * @list: old list to append
 * @size: size of list
 * @new: node to add to list
 *
 * Return: pointer to the new list
 */
listint_t **_ra(listint_t **list, size_t size, listint_t *new)
{
	listint_t **newlst;

	size_t i;

	newlst = malloc(size * sizeof(listint_t *));

	if (newlst == NULL)
	{
		free(list);
		exit(98);
	}

	for (i = 0; i < size - 1; i++)
		newlst[i] = list[i];

	newlst[i] = new;
	free(list);

	return (newlst);
}

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @head: Double pointer to the start of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t free_listint_safe(listint_t **head)
{
	size_t i, num = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (num);

	while (*head != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (*head == list[i])
			{
				*head = NULL;
				free(list);
				return (num);
			}
		}

		num++;
		list = _ra(list, num, *head);
		next = (*head)->next;
		free(*head);
		*head = next;
	}

	free(list);
	return (num);
}

