#include "main.h"

/**
 * read_textfile- A function that read text file and print it to POSIX stdout.
 * @filename: name of the file being read
 * @letters: number of letters to be read
 * Return: 0 if write fail and if read is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t file_data;
	ssize_t write_text;
	ssize_t text;

	file_data = open(filename, O_RDONLY);
	if (file_data == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	text = read(file_data, buf, letters);
	write_text = write(STDOUT_FILENO, buf, text);

	free(buf);
	close(file_data);
	return (write_text);
}
