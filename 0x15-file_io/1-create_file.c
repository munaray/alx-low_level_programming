#include "main.h"

/**
 * create_file - A function that creates a file.
 * @filename: This point to the name of file created
 * @text_content: This point to string in the created files.
 *Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_data, write_text, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	file_data = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write_text = write(file_data, text_content, len);

	if (file_data == -1 || write_text == -1)
		return (-1);

	close(file_data);

	return (1);
}
