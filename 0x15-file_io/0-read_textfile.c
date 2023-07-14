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
	int file;
	ssize_t tot_char;
	char bf[1024 * 8];

	if (filename == NULL || !letters)
		return (0);

	file = open(filename, 'r');
	if (file == -1)
		return (0);

	tot_char = read(file, &bf[0], letters);

	tot_char = write(1, &bf[0], tot_char);


	close(file);
	return (tot_char);
}
