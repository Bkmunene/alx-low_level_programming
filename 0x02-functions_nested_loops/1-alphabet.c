#include "main.h"

/**
  * print_alphabet - program that prints alphabets in lowercase
  */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
}
