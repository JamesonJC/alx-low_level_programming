#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - Appends text in the file at the end
 * @filename: File to be appended with text
 * @text_content: Contents to be appended in the file
 * Return: 1 o success or -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int n_bytes;
	int n_bytes_write;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (!file)
		return (-1);

	if (text_content != NULL)
	{
		n_bytes = 0;
		while (text_content[n_bytes])
			n_bytes++;

		n_bytes_write = write(file, text_content, n_bytes);

		if (n_bytes_write == -1)
			return (-1);
	}
	close(file);
	return (1);
}
