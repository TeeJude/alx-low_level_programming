#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- function that reads a text file and prints it to
 * the POSIX standard output
 * @filename: text file to be read by the function
 * @letters: number of letters it should read and print
 * Return: a - the actual number of letters it could read and print
 * 0 if file cannot be opened or file name is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t a;
	ssize_t b;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	b = read(fd, buffer, letters);
	a = write(STDOUT_FILENO, buffer, b);

	free(buffer);
	close(fd);
	return (a);
}
