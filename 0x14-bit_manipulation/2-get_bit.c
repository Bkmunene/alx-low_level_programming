#include "main.h"

/**
 * get_bit - returns bits vale at an index
 * @n: no. to search
 * @index: bitindex
 *
 * Return: mybitval
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int mybitval;

	if (index > 63)
		return (-1);

	mybitval = (n >> index) & 1;

	return (mybitval);
}

