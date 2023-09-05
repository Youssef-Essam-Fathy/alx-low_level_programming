#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to be read
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bys;
	char buff[READ_BUFF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bys = read(fd, &buff[0], letters);
	bys = write(STDOUT_FILENO, &buff[0], bys);
	close(fd);
	return (bys);
}
