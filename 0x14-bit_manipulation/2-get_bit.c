#include "main.h"
/**
 * get_bit - returns bit value at index
 * @n: value of bit to be returned
 * @index: index of bit
 * Return: value of bit at index else -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, result;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divisor = 1 << index;
	result = n & divisor;
	if (result == divisor)
		return (1);

	return (0);
}

