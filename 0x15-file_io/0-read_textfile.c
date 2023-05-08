#include "main.h"

/**
 * read_textfile -  reads a text file and prints to POSIX standard output
 * @filename: name of the text file to be read
 * @letters:  number of letters text file should read and print
 *
 * Return: 0 or NULL depending on the outcome
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buf;

	if (filename == NULL)
		return (0);

	o = open(filename, O_RDONLY);

	buf = malloc(sizeof(char) * letters);

	r = read(o, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		return (0);
	}

	free(buf);
	close(o);
	return (w);
}
