#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints to POSIX stdout_
 * @filename: The name of the file
 * @letters: Number of the bites to be read and  be printed
 * Return: bytes size or zero
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	ssize_t size_to_read, size_to_write;
	char *buffer;

	if (!filename)
		return (0);

	file = fopen(filename, "r");

	if (file == NULL)
		return (0);

	buffer = (char *) malloc(letters + 1);

	if (buffer == NULL)
		return (0);

	size_to_read = fread(buffer, 1, letters, file);
	if (size_to_read == 0)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	size_to_write = fwrite(buffer, 1, size_to_read, stdout);
	if (!(size_to_write == size_to_read))
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	fclose(file);

	free(buffer);

	return (size_to_write);
}
