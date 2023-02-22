#include "main.h"

/**
 * print_sign - prints the sign of a particular  number
 * @n: n is integer
 *
 * Return: 1 (if positive), 0 (if zero), -1 (if negative)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
