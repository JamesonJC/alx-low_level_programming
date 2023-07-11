#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include "main.h"

/**
 * append_text_to_file - Open a file and add text by appending at
 *                       the end of text already in the file.
 * @filename: File to be opened
 * @text_content: Text to be written/added
 * Return: 1 on success. -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t file, char_w, tot_char;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		tot_char = strlen(text_content);
		char_w = write(file, text_content, tot_char);
		if (char_w == -1)
			return (-1);
	}
	close(file);
	return (1);
}
