#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"
#include <string.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file to create
 * @text_content: a NULL terminated string
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t writing = 0;

	if (filename == NULL)
		return (-1);

	/* append data to the end of the file */
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	/* do not add anything to the file */
	if (text_content == NULL)
	{
		close(fd);
		return (1); /* file exists */
	}

	writing = write(fd, text_content, strlen(text_content));
	if (writing == -1)
		return (-1);

	close(fd);
	return (1);
}
