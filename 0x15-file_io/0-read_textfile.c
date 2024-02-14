#include "main.h"

/**
*read_textfile - reads a text file and prints it to the POSIX standard output.
*@filename: a string
*@letters: a number
*
*Return: the actual number of letters it could read and print, or 0
*	if the file can not be opened or read, if filename is NULL
*	if write fails or does not write the expected amount of bytes.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd_open, fd_close;
	ssize_t fd_read, fd_write;
	char *buff;

	if (filename == NULL)
		return (0);
	fd_open = open(filename, O_RDONLY);
	if (fd_open == -1)
		return (0);
	buff = (char *)malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	fd_read = read(fd_open, buff, letters);
	if (fd_read == -1)
		return (0);
	fd_write = write(STDOUT_FILENO, buff, fd_read);
	if (fd_write == -1)
		return (0);
	fd_close = close(fd_open);
	if (fd_close == -1)
		return (0);
	return (fd_read);
}
