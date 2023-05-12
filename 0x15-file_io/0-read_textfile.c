#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, bytes_r, bytes_w;
	char *buf;

	file = open(filename, 'r');
	if (filename == NULL || file == -1)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters);

	bytes_r = read(file, buf, letters);

	bytes_w = write(STDOUT_FILENO, buf, bytes_r);

	if (bytes_w == -1 || bytes_r == -1 || bytes_w != bytes_r || buf == NULL)
	{
		close(file);
		free(buf);
		return (0);
	}

	close(file);
	free(buf);
	return (bytes_r);
}
