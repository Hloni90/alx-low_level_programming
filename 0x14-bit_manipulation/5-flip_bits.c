#include "main.h"
/**
 * flip_bits - counts number of bits to change to traverse
 * @n: first num
 * @m: second
 * Return: count of bit to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int exclude, recent;
	unsigned int i, j;

	i = 0;
	recent = 1;
	exclude = n ^ m;
	for (j = 0; j < (sizeof(unsigned long int) * 8); j++)
	{
		if (recent == (exclude & recent))
			i++;
		recent <<= 1;
	}

	return (i);
}
