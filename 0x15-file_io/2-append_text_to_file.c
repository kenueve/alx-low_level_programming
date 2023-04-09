#include "main.h"

/**
 * append_text_to_file - appends text to end of a file
 * @filename: name of file
 * @text_content: NULL-terminated string to add to end of file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_len, content_len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	content_len = 0;
	while (text_content[content_len])
		content_len++;

	write_len = write(fd, text_content, content_len);
	if (write_len == -1 || write_len != content_len)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
