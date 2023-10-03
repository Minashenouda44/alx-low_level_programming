#include "main.h"

#define BUFFER_SIZE 1024

#define USAGE "Usage: cp file_from file_to\n"
#define ERROR_READING "Error: Can't read from file %s\n"
#define ERROR_WRITTING "Error: Can't write to %s\n"
#define ERROR_CLOSING "Error: Can't close fd %d\n"

/**
 * main - Entry point
 * @argc: arguments count
 * @argv: arguments values
 * Return: 0 success
 */

int main(int argc, char **argv)
{
	char *file_from = argv[1];
	char *file_to = argv[2];
	int fd_from, fd_to;
	char buffer[1024];
	int text_read, text_written;

	if (argc != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, ERROR_READING, file_from), exit(98);
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, ERROR_WRITTING, file_to), exit(99);

	while ((text_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		text_written = write(fd_to, buffer, text_read);
		if (text_written == -1)
		{
			dprintf(STDERR_FILENO, ERROR_WRITTING, file_to);
			close(fd_from), close(fd_to), exit(99);
		}
	}
	if (text_read == -1)
	{
		dprintf(STDERR_FILENO, ERROR_READING, file_from);
		close(fd_from), close(fd_to), exit(98);
	}
	if (close(fd_from) == -1 || close(fd_to) == -1)
		dprintf(STDERR_FILENO, ERROR_CLOSING, fd_from), exit(100);
	return (0);
}
