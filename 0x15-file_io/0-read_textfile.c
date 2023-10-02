#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 * read_textfile   - reads a text file and prints it to POSIX standard output.
 * @filename: The filename
 * @letters: The letters to print and read from the file.
 * Return: the number of characters or NULL on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_descriptor, bytes_read, bytes_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = (char *)malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	bytes_read = read(file_descriptor, buffer, letters);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (file_descriptor == -1 || bytes_read == -1 ||
			bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(file_descriptor);

	return (bytes_written);
}
