#include "main.h"

/**
 * _strlen - finds the length of the string
 * @str: string
 * Return: integer length of the string
 **/

int _strlen(char *str)
{
	int i = 0;

	if (!str)
		return (0);

	while (*str++)
		i++;
	return (i);
}

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file to be appended
 * @text_content:  a NULL terminated string to add at the end of the file
 * Return: 1 on success, -1 on failure
 **/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_WRONLY | O_APPEND);
	ssize_t byts = 0, length = _strlen(text_content);

	if (!filename)
		return (-1);
	if (fd == -1)
		return (-1);
	if (length)
		byts = write(fd, text_content, length);
	close(fd);
	return (byts == length ? 1 : -1);
}

