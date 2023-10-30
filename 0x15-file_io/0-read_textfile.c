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
	int fd = open(filename, O_CREAT | O_RDWR);
	char *buff;
	ssize_t n;

	if (filename == NULL)
	{
		return (0);
	}
	buff = (char *)malloc(letters);
	if (buff == NULL)
	{
		free(buff);
		return (0);
	}
	n = read(fd, buff, letters);
	if (n == -1)
	{
		free(buff);
		return (0);
	}
	n = write(STDOUT_FILENO, buff, n);
	if (n == -1)
	{
		free(buff);
		return (0);
	}
	close(fd);
	free(buff);
	return (n);
}
