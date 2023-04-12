#include "main.h"

/**
 * create_file - Creat file
 * @filename: Pointer *name *file *create
 * @text_content: pointer to *strng *write *file
 * Return: F() fail --1
 */
int create_file(const char *filename, char *text_content)
{
	int myfd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	myfd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(myfd, text_content, len);

	if (myfd == -1 || w == -1)
		return (-1);

	close(myfd);

	return (1);
}

