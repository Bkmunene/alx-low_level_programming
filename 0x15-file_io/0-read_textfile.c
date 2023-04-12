#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- read *txt
 * @filename: *txt
 * @letters: no. letters
 * Return: w- bytes read/prnted
 * 0 upon f() fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *mybuf;
	ssize_t myfd;
	ssize_t w;
	ssize_t t;

	myfd = open(filename, O_RDONLY);
	if (myfd == -1)
		return (0);
	mybuf = malloc(sizeof(char) * letters);
	t = read(myfd, mybuf, letters);
	w = write(STDOUT_FILENO, mybuf, t);

	free(mybuf);
	close(myfd);
	return (w);
}

