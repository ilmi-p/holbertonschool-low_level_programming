#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX .
 * @filename: Name of the file to read.
 * @letters: Number of letters to read and print.
 * Return: The actual number of letters it could read and print,
 * or 0 if an error occurs (e.g., file can't be opened, read fails).
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	if (filename == NULL)
	return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (bytes_written);
}