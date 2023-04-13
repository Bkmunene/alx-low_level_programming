#include "main.h"

/**
 * append_text_to_file - Appds txt at end file.
 * @filename: pointer *name *file.
 * @text_content: strng to add.
 *
 * Return: function dail -1.
 *         Deny writer permission when file dosnt exist -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x, y, xy = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (xy = 0; text_content[xy];)
			xy++;
	}

	x = open(filename, O_WRONLY | O_APPEND);
	y = write(x, text_content, xy);

	if (x == -1 || y == -1)
		return (-1);

	close(x);

	return (1);
}


