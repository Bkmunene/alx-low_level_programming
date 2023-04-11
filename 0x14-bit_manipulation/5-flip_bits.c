#include "main.h"

/**
 * flip_bits - no. of bits to chge
 * to get from 1 no. to another
 * @n: first number
 * @m: second number
 *
 * Return: bitnum to chnge
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, countbit = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			countbit++;
	}

	return (countbit);
}

