#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * dup_data - helper function used to copy the data into file_to
 * @file_from: original file
 * @file_to: file ext is copied into
 * @argv: values in each input
 */

void dup_data(int file_from, int file_to, char *argv[])
{
	char buffer[1024];
	ssize_t bytes_read, writing;

	/* must read 1,024 bytes at a time */
	while ((bytes_read = read(file_from, buffer, 1024)) > 0)
	{
		/* write exactly number of bytes read */
		writing = write(file_to, buffer, bytes_read);
	}
}

/**
 * main - program that copies the content of a file to another file
 * @argc: number of input arguments
 * @argv: values in each input
 *
 * Return: various error messages or text in output
 */

int main(int argc, char *argv[])
{
	int file_from, file_to;

	/* num of arg not correct */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY); /* open first file */

	/* if file_from does not exist, or if you can not read it,  */
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	/* if file_to already exists, truncate it */
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	/* if you can not create or if write to file_to */
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	dup_data(file_from, file_to, argv);

	/* if you can not close a file descriptor */
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
