#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	char a;
	int  b;
       float c;
       long int d;
       long long int e;

	printf("Size of a char: %ld  bytes(s)\n", sizeof(a));
	printf("Size of an int: %ld bytes(s)\n", sizeof(b));
	printf("Size of a long int: %ld bytes(s)\n", sizeof(c));
	printf("Size of a long long int: %ld bytes(s)\n", sizeof(d));
	printf("Size of a float: %ld byte(s)\n", sizeof(e));

	return (0);
}
