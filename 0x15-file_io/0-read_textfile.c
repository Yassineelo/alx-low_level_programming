#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Entry point
 * @filename: filename
 * @letters: letters
 * Return: number of bytes
 *        0 fails or NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *b;
	ssize_t f;
	ssize_t w;
	ssize_t t;

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	b = malloc(sizeof(char) * letters);
	t = read(f, b, letters);
	w = write(STDOUT_FILENO, b, t);

	free(b);
	close(f);
	return (w);
}

