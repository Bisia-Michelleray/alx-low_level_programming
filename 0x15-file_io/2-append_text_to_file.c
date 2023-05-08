#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr;
	int i;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	op = open(filename, O_RDWR | O_APPEND);
	if (op == -1)
	{
		return (-1);
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
