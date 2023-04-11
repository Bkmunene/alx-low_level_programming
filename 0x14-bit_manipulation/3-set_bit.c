#include "main.h"

/**
 * set_bit - set bit to 1
 * @n: pointer *num *chnage
 * @index: bit index *set *1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	return (index > 63 ? -1 : ((*n |= (1UL << index)), 1));
}


