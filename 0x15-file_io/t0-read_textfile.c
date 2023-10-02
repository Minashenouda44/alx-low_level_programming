#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it to the POSIX
 * @filename: point to filename
 * @letters: no of letters to read
 * Return: letters written
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	char *buffer = NULL;
	ssize_t letters_read;
	ssize_t letters_written;

	if (filename == NULL || !letters)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(letters) + 1);
	if (buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}

	letters_read = read(file_descriptor, buffer, letters);
	if (letters_read == -1)
	{
		close(file_descriptor);
		free(buffer);
		return (0);
	}

	buffer[letters_read] = '\0';

	letters_written = write(STDERR_FILENO, buffer, letters_read);

	close(file_descriptor);
	free(buffer);

	if (letters_written != letters_read)
		return (0);

	return (letters_read);
}
