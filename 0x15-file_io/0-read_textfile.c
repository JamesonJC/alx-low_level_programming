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
	ssize_t file, tot_char;
	char bf[1024 * 8];

	if (!letters)
		return (0);

	file = open(filename, 'r');
	if (filename == NULL || file == -1)
		return (0);

	tot_char = read(file, &bf[0], letters);

	tot_char = write(1, &bf[0], tot_char);

	if (tot_char == -1 || bf == NULL)
	{
		close(file);
		return (0);
	}

	close(file);
	return (tot_char);
}
