#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - read a text file
 * @filename: a pointer to the name of the file
 * @letters: number of letters
 * Return: if the function fails - 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, 0_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO< buffer, r);

	if (o == -1 || r == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}
