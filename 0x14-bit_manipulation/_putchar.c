#include "main.h"
#include <unistd.h>
/**
 * _putchar - writing chrt c to stdout
 * @c: chrtr to prt
 *
 * Return: On scs 1.
 * On error, ruturn -1 and errno setting
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

