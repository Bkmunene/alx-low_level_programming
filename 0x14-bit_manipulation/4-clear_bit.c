#include "main.h"

/**
 * clear_bit - setbit value to 0
 * @n: pointer *num *change
 * @index: bitindex to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	return (index > 63 ? -1 : ((*n &= ~(1UL << index)), 1));
}


