#include "main.h"

/**
 * create_file - Create a function that creates a file.
 * @filename: pointer 2 file name
 * @text_content: content
 * Return: 1 success -1 failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int text_length;
	ssize_t text_written;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_descriptor == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(file_descriptor);
		return (1);
	}
	text_length = strlen(text_content);
	text_written = write(file_descriptor, text_content, text_length);
	if (text_written == -1)
	{
		close(file_descriptor);
		return (-1);
	}

	close(file_descriptor);
	return (1);
}
