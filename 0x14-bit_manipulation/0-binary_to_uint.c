#include "main.h"

/**
 * binary_to_uint -Unassgned int conv
 * @b: string for bin. num.
 *
 * Return: num conv
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int mydecval = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		mydecval = 2 * mydecval + (b[i] - '0');
	}

	return (mydecval);
}

