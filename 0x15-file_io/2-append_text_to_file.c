#include "main.h"

/**
*append_text_to_file - appends text at the end of a file.
*@filename: a file's name
*@text_content: data
*
*Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w_val, c_val;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_EXCL | O_APPEND);
	if (fd == -1)
		return (fd);
	if (text_content != NULL)
	{
		w_val = write(fd, text_content, _strlen(text_content));
		if (w_val == -1)
		{
			close(fd);
			return (w_val);
		}
	}
	c_val = close(fd);
	if (c_val == -1)
		return (c_val);
	return (1);
}
/**
*_strlen - calculate the length of a string
*@str: string
*
*Return: the lenght of a string.
*/
int _strlen(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}
