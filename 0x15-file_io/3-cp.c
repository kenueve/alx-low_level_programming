#include "main.h"

/**
 * main - Copies the content of a file to another file
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 on success, or an exit code on failure
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to, rd, wr;
	char buf[1024];

	/* Check the number of arguments */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	/* Open the source file */
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	/* Open the destination file */
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	/* Copy the content from source to destination */
	while ((rd = read(fd_from, buf, 1024)) > 0)
	{
		wr = write(fd_to, buf, rd);
		if (wr != rd)
		{
			close(fd_from);
			close(fd_to);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	/* Handle read error */
	if (rd == -1)
	{
		close(fd_from);
		close(fd_to);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	/* Close the file descriptors */
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", (close(fd_from) == -1 ? fd_from : fd_to));
		exit(100);
	}

	return (0);
}

