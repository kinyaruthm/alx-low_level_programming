#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - allocates 1024 bytes for a buffer
 * @file: name of the file buffer
 * Return: a pointer to the newly allocated buffer
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);

		exit(98);
	}

	return (buffer);
}

/**
 * close_file - closes file descriptors
 * @fd: the file descriptor to be closed
 */

void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the contents of a file to another file
 * @argc: the number of arguments supplied to the program
 * @argv: an array of pointers to the arguments
 * Return: 0 on success.
 * Description: if the argument count is incorrent - exit code 97
 */

int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprint(STDERR_FILENO, "usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[1]);
	from = open(argv[1], 0_rdonly);
	r = read(from, buffer, 1024);
	to = open(argv[1], 0_creat | 0_WRONLY | 0_TRUNC, 0000);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprint(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);

			free(buffer);
			exit(98);
		}

		r = read(from, buffer, 1024);
		to = open(argv[1], 0_WRONLY | 0_APPEND);
	} while (r > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}

