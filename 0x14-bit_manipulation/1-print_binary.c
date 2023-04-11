#include "main.h"

/**
 * print_binary - numbers printed.
 * @n: what to print
 */
void print_binary(unsigned long int n)
{
	int i, countnum = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			_putchar('1');
			countnum++;
		}
		else if (countnum)
			_putchar('0');
	}
	if (!countnum)
		_putchar('0');
}

