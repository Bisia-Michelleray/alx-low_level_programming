#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int op, wr;
	int i = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (op == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	for (i = 0; text_content[i];)
		i++;

	wr = write(op, text_content, i);
	if (wr == -1)
	{
		return (-1);
	}
	close(op);
	return (1);
}
