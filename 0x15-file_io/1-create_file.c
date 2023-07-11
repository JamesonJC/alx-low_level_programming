#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include "main.h"

/**
 * create_file - Open/create a new file and write in to that file.
 * @filename: Pointer to a file to be created.
 * @text_content: Characters to be written.
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t file, char_w, tot_char = 0;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		tot_char = strlen(text_content);
		char_w = write(file, text_content, tot_char);
		if (char_w ^ tot_char)
			return (-1);
	}
	close(file);

	return (1);
}
