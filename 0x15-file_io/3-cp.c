#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *get_buffer(char *file);
void close_file(int fd);

/**
 * get_buffer - 1024 bts allocated per buffr
 * @file: nane of file bufr is storing for.
 *
 * Return: *p to the allctd-buffer.
 */
char *get_buffer(char *file)
{
	char *my_buffer;

	my_buffer = malloc(sizeof(char) * 1024);

	if (my_buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (my_buffer);
}

/**
 * close_file - will close file decrptors.
 * @fd: descrptor file to be closed.
 */
void close_file(int fd)
{
	int rtrn;

	rtrn = close(fd);

	if (rtrn == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If this argument count is not correct - exit cod 97.
 * If file_from doesnt exist or cant be read - exit cod 98.
 * If file_to cant be created or writen to - ext cod 99.
 * If file_to or file_from cant be closed - exit cod 100.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, read_bytes, write_bytes;
	char *my_buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	my_buffer = get_buffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	read_bytes = read(file_from, my_buffer, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1 || read_bytes == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(my_buffer);
			exit(98);
		}

		write_bytes = write(file_to, my_buffer, read_bytes);
		if (file_to == -1 || write_bytes == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(my_buffer);
			exit(99);
		}

		read_bytes = read(file_from, my_buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (read_bytes > 0);

	free(my_buffer);
	close_file(file_from);
	close_file(file_to);

	return (0);
}

