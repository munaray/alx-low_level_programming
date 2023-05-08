#include "main.h"

/**
 * create_buffer - A program that allocates 1024 bytes for a buffer.
 * @file: A pointer to the file buffer is storing chars.
 * Return: if success return newly-allocated buffer else return error
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - The function to close files.
 * @file_data: The file descriptor to be closed.
 */
void close_file(int file_data)
{
	int c;

	c = close(file_data);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_data);
		exit(100);
	}
}

/**
 * main - The main function.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success or 1 on failure.
 */
int main(int argc, char *argv[])
{
	int from, to, read_text, write_text;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	read_text = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || read_text == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		write_text = write(to, buffer, read_text);
		if (to == -1 || write_text == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		read_text = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (read_text > 0);
free(buffer);
close_file(from);
close_file(to);
return (0);
}
