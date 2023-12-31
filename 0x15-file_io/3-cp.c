#include "main.h"
/**
*main - copies the content of a file to another file.
*@argc: arguments count
*@argv: arguments vector
*
*Return: 0 when it success else it returns 97, 98, 99 or 100.
*/
int main(int argc, char *argv[])
{
	int fd_src, fd_dest, read_val = 1, write_val, close_val_1, close_val_2;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_src = open(argv[1], O_RDONLY | O_EXCL);
	if (fd_src == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]), exit(98);
	fd_dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_dest == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
			argv[2]), exit(99);
	while (read_val > 0)
	{
		read_val = read(fd_src, buff, 1024);
		if (read_val == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			 argv[1]), exit(98);
		if (read_val == 0)
			break;
		write_val = write(fd_dest, buff, read_val);
		if (write_val == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				argv[2]), exit(99);
	}
	close_val_1 = close(fd_src);
	if (close_val_1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
			fd_src), exit(100);
	close_val_2 = close(fd_dest);
	if (close_val_1 == -1 || close_val_2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
			fd_src), exit(100);
	return (0);
}
