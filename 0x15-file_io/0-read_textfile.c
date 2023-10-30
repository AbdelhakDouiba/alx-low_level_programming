#include "main.h"

/**
*read_textfile - reads a text file and prints it to the POSIX standard output
*@filename: conatains a file name
*@letters: number of letters to be printed
*
*Return: the number of printed letters
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_CREAT | O_RDWR), i = 0;
	char *buff;
	ssize_t n;

	if (filename == NULL)
	{
		return (0);
	}
	buff = (char *)malloc(letters);
	n = read(fd, buff, letters);
	if (n == -1)
	{
		return (0);
	}
	while (buff[i])
	{
		_putchar(buff[i]);
		i++;
	}
	_putchar('\n');
	close(fd);
	free(buff);
	return (n);
}
