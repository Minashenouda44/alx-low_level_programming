#include "main.h"

/**
 * create_file - Create a function that creates a file.
 * @filename: pointer 2 file name
 * @text_content: content
 * Return: 1 success -1 failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int text_length;
	int text_written;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_APPEND);
	if (file_descriptor == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(file_descriptor);
		return (1);
	}

	text_length = strlen(text_content);

	text_written = write(file_descriptor, text_content, text_length);

	if (!text_written)
	{
		close(file_descriptor);
		return (1);
	}

	close(file_descriptor);

	return (1);
}
