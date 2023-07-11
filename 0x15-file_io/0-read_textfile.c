#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - The function open a file and for reading inside.
 * @filename: Pointer that is pointing the file.
 * @letters:  Number of characters to be read in the file
 * Return: Total number of characters read.
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, bytes_r, bytes_w;
	char *bf;

	file = open(filename, 'r');
	if (filename == NULL || file == -1)
	{
		return (0);
	}

	bf = malloc(sizeof(char) * letters);

	bytes_r = read(file, bf, letters);

	bytes_w = write(1, bf, bytes_r);

	if (bytes_w == -1 || bytes_r == -1 || bytes_w != bytes_r || bf == NULL)
	{
		close(file);
		free(bf);
		return (0);
	}

	close(file);
	free(bf);
	return (bytes_r);
}
