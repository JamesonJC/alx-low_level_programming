#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include "main.h"

/**
 * err_display - Checks the error between the files, print and exit
 * @err_c: The code of the error printed
 * @err_msg: The error message to be printed
 * @filename: The name of the file to be checked
 * @f: The files where copy and paste are perfomed
 * Return: Error code
 */

void err_display(int err_c, const char *err_msg, const char *filename, int f)
{
	dprintf(STDERR_FILENO, err_msg, filename);
	if (!(f == -1))
		close(f);
	exit(err_c);
}

/**
 * main - Copies the content of the file from one file to another
 * @argc: The total number of arguments in an array argv
 * @argv: The array of values of the arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int file_copy, file_paste;
	ssize_t n_bytes = 0, bytes_w = 0;
	const char *file_from = argv[1];
	const char *file_to = argv[2];
	char buffer[BUF_S];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s\n file_from file_to", argv[0]);
		exit(97);
	}

	file_copy = open(file_from, O_RDONLY);
	if (file_copy == -1)
		err_display(98, "Error: Can't read from file %s\n", file_from, -1);
	file_paste = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_paste == -1)
		err_display(99, "Error: Can't write to %s\n", file_to, file_copy);

	while ((n_bytes = read(file_copy, buffer, BUF_S)) > 0)
	{
		bytes_w = write(file_paste, buffer, n_bytes);
		if (bytes_w == -1)
			err_display(99, "Error: Can't write to %s\n", file_to, file_copy);

	}

	if (n_bytes == -1)
		err_display(98, "Error: Can't read from file %s\n", file_from, file_paste);
	if (close(file_copy) == -1)
		err_display(100, "Error: Can't close fd %d\n", file_from, file_paste);
	if (close(file_paste) == -1)
		err_display(100, "Error: Can't close fd %d\n", file_to, file_copy);
	return (0);
}
