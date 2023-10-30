#include "main.h"

/**
 * read_textfile - function that reads file and prints it to stdout.
 * @filename: file to read
 * @letters: number of letters to read
 *
 * Return: successful
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n_read, n_wrote;
	char *buffer;
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (-1);

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (-1);
	}

	n_read = read(fd, buffer, letters);
	if (n_read == -1)
	{
		free(buffer);
		close(fd);
		return (-1);
	}
	n_wrote = write(STDOUT_FILENO, buffer, n_read);
	if (n_wrote == -1)
	{
		free(buffer);
		close(fd);
		return (-1);
	}

	free(buffer);
	close(fd);
	return (n_wrote);
}
