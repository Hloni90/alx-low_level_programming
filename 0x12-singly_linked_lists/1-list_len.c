#include "lists.h"
/**
 * list_len - returns the number of in a list
 *
 * @t: a pointer o the head in the list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *t)
{
	size_t count = 0;

	const list_t *current = t;

	for (; current != NULL; current = current->next)
	{
		count++;
	}
	return (count);
}
