#include "main.h"
/**
 * set_bit - will set bit value to 1 at index
 * @n: value of bit
 * @index: index
 * Return: success 1 else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int map;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	return (-1);
	map  = 1 << index;
	*n = *n | map;

	return (1);
}
