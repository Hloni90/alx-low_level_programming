#include "main.h"
/**
 * _power - gets the (base ^ power)
 * @base: exponent base
 * @pow: exponet base
 * Return: (base ^ power)
 */
unsigned long int _power(unsigned int base, unsigned int pow)
{
        unsigned long int digt;
        unsigned int i;

        digt = 1;
        for (i = 1; i <= pow; i++)
                digt *= base;
        return (digt);
}

/**
 * print_binary - function that prints a binary
 * @n: digit to be printed
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int div, rslt;
	char flag;

	flag = 0;
	div = _power(2, sizeof(unsigned long int) * 8 - 1);
	while (div != 0)
	{
		rslt = n & div;
		if (rslt == div)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || div == 1)
		{
			_putchar('0');
		}
		div >>= 1;
	}
}
