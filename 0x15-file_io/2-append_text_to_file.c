#include "main.h"

/**
 * append_text_to_file - A function that appends text at the end of a file.
 * @filename: This point to the name of file created
 * @text_content: This point to string in the created files.
 *Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int only, write_text, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	only = open(filename, O_WRONLY | O_APPEND);
	write_text = write(only, text_content, len);

	if (only == -1 || write_text == -1)
		return (-1);

	close(only);

	return (1);
}
