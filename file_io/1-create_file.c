#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: a NULL terminated string
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t writing = 0;

	if (filename == NULL)
		return (-1);

	/* if text_content is NULL create an empty file */
	if (text_content == NULL)
		text_content = "";

	/** 0600 = rw------- */
	fd = open(filename, O_CREAT | O_WRONLY, 0600);

	if (fd == -1)
		return (-1);

	writing = write(fd, text_content, strlen(text_content));
	if (writing == -1)
		return (-1);

	close(fd);
	return (1);
}
