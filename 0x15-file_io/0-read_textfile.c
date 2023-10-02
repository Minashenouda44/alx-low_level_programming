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
	char *buffer;
	ssize_t letters_read = 0;
	ssize_t letters_written = 0;

	if (filename == NULL || !letters)
		return (0);

	file_descriptor = open(filename, O_RDONLY);

	buffer = malloc(letters + 1);

	letters_read = read(file_descriptor, buffer, letters);
	letters_written = write(STDERR_FILENO, buffer, letters_read);

	close(file_descriptor);

	if (letters_written != letters_read)
		return (0);

	return (letters_read);
}
