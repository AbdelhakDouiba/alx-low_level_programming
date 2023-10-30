#include "main.h"

/**
*create_file - creates a file.
*@filename: file name
*@text_content: data
*
*Return: 1, -1 if it fails
*/

int create_file(const char *filename, char *text_content)
{
	int fd, write_value, close_value;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (fd);
	if (text_content != NULL)
	{
		write_value = write(fd, text_content, _strlen(text_content));
		if (write_value == -1)
		{
			close(fd);
			return (write_value);
		}
	}
	close_value = close(fd);
	if (close_value == -1)
		return (close_value);
	return (1);
}
/**
*_strlen - calculate the length of a string
*@str: string
*
*return: the lenght of a string.
*/
int _strlen(char *str)
{
	int i = 0;

	while(*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}
