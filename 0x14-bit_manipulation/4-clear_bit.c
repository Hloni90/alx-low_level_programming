#include "main.h"
/**
 * clear_bit - sets bit's value to 0 at a given index
 * @n: integer
 * @index: maps where to set the bit
 * Return: 1 on success, unsuccess-1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
