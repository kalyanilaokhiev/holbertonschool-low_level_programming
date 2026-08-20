#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file from which to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int *size;
	ssize_t reading = 0, writing = 0;

	if (filename == NULL)
		return (0);

	/* mallocing size of all letters in document */
	size = malloc(sizeof(char) * letters);
	if (size == 0)
		return (0);

	/* open file */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(size);
		return (0);
	}

	/* read file */
	reading = read(fd, size, letters);

	if (reading == -1)
	{
		free(size);
		return (0);
	}

	/* write whats in file:1, buffer, count of bytes read */
	writing = write(STDOUT_FILENO, size, reading);

	if (writing == -1 || writing != reading)
	{
		close(fd);
		free(size);
		return (0);
	}
	close(fd);
	return (reading);
}
