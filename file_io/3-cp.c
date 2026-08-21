#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * main - rogram that copies the content of a file to another file
 * @argc: number of input arguments
 * @argv: values in each input
 *
 * Return: various error messages or text in output
 */

int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t bytes_read, writing;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY); /* open first file */

	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((bytes_read = read(file_from, buffer, 1024)) > 0)
	{
		writing = write(file_to, buffer, bytes_read);

		if (writing == -1 || writing != bytes_read)
		{
			close(file_from);
			close(file_to);
			dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[2]);
			exit(100);
		}
	}
	if (bytes_read == -1)
	{
		close(file_from);
		close(file_to);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	return (0);
}
