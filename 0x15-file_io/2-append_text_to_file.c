#include "main.h"

/**
*append_text_to_file - appends text at the end of a file.
*@filename: a string
*@text_content: a string
*
*Return: 1 on success and -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd_open, fd_close, length;
	ssize_t fd_write;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fd_open = open(filename, O_APPEND | O_WRONLY);
	if (fd_open == -1)
		return (-1);
	for (length = 0; text_content[length] != '\0'; length++)
	{}
	fd_write = write(fd_open, text_content, length);
	if (fd_write == -1)
		return (-1);
	fd_close = close(fd_open);
	if (fd_close == -1)
		return (-1);
	return (1);
}
