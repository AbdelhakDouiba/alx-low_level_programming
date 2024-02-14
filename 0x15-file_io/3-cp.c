#include "main.h"

/**
*main - copies the content of a file to another file.
*@argc: argument count
*@argv: argument vector
*
*Return: 0 on success. 97, 98, 99 or 100 on failure
*/

int main(int argc, char *argv[])
{
	int fd_open_to, to, fd_open_from, mo, fd_read = 1, fd_write;
	char buff[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd_open_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_open_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99); }
	fd_open_from = open(argv[1], O_RDONLY);
	if (fd_open_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]), exit(98); }
	while (fd_read != 0)
	{
		fd_read = read(fd_open_from, buff, 1024);
		if (fd_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]), exit(98);
		}
		buff[1024] = '\0';
		if (fd_read != 0)
		{
			fd_write = write(fd_open_to, buff, fd_read);
			if (fd_write == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				argv[2]), exit(99);
			}}}
	to = close(fd_open_to);
	if (to == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to), exit(100);
	mo = close(fd_open_from);
	if (mo == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", mo), exit(100);
	return (0);
}
