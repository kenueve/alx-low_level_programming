#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 *
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: the actual number of letters read and printed,
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytes_read, bytes_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	/* allocate memory for buffer */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	/* open file for reading */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	/* read from file */
	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	/* write to standard output */
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* clean up and return actual number of letters read and printed */
	free(buffer);
	close(fd);
	return (bytes_read);
}
