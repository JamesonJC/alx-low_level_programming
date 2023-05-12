#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define BUF_SIZE 1024

/**
 * f_exit - Function that executes the required condintions to exit.
 * @argc: Total number of arguments passed on the command.
 * @argv :Array of values of the arguments on the command.
 * @copied_f: The file that holds the content to be copied.
 * @pasted_f: The file that the copied content is pasted in.
 *
 */

void f_exit(int argc, char *argv[], ssize_t copied_f, ssize_t pasted_f)
{
	char arguments_error[] = "Usage: %s file_from file_to\n";
	char write_error[] = "Error: Can't write to %s\n";
	char read_error[] = "Error: Can't read to %s\n";
	char close_error[] = "Error: Can't close fd %s\n";

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, arguments_error, argv[0]);
		exit(97);
	} else if (copied_f == -1)
	{
		dprintf(STDERR_FILENO, read_error, argv[1], -1 | pasted_f);
		exit(98);
	} else if (pasted_f == -1)
	{
		dprintf(STDERR_FILENO, write_error, argv[2], copied_f);
		exit(99);
	} else if (close(copied_f) == -1)
	{
		dprintf(STDERR_FILENO, close_error, argv[2], copied_f);
		exit(100);
	} else if (close(pasted_f) == -1)
	{
		dprintf(STDERR_FILENO, close_error, argv[1], pasted_f);
		exit(100);
	}
}

/**
 * main - Function start the execution.
 * @argc: Total number of arguments passed on the command.
 * @argv: Array of values of the arguments on the command.
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	const char *copied_s, *pasted_s;
	ssize_t copied_f, pasted_f, char_read, char_write;
	char buffer[BUF_SIZE];

	copied_s = argv[1];
	pasted_s = argv[2];

	copied_f = open(copied_s, O_RDONLY);
	pasted_f = open(pasted_s, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while ((char_read = read(copied_f, buffer, BUF_SIZE)) > 0)
	{
		char_write = write(pasted_f, buffer, char_read);
		if (char_write == -1)
		{
			pasted_f = -1;
			f_exit(argc, argv, copied_f, pasted_f);

		}
	}

	f_exit(argc, argv, copied_f, pasted_f);

	return (0);
}
