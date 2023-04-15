#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - File creation
 * @filename: The name of the file to be created
 * @text_content: Content to be written into the file
 * Return: 1 success or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	size_t ln;
	ssize_t n_bytes;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	if (!(text_content == NULL))
	{
		ln = strlen(text_content);
		n_bytes = write(file, text_content, ln);

		if (!(n_bytes == (ssize_t)ln))
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
