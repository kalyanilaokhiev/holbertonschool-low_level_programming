#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 */

int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t bytes_read, writing;
	char buffer[1024];

	/* name + 2 files = 3 */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	/* open first file */
	file_from = open(argv[1], O_RDONLY);
	
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	/* open and create second file */
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Can't write to %s\n", argv[2]);
		exit(99);
	}

	bytes_read = read(file_from, buffer, 1024);

	while (bytes_read > 0)
	{
		writing = write(file_to, buffer, bytes_read);
	}

	if (writing != bytes_read)
	{
		close(file_from); close(file_to);

		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[2]);
		exit(100); 
	}

	if (bytes_read == -1) 
	{ 
		close(file_from); close(file_to);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]); 
		exit(98);
	}

	return (0);
}
