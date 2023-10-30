#include "main.h"

/**
 * exit_error - print an error message and exit with the given status
 * @status: exit status
 * @message: error message format string
 */
void exit_error(int status, const char *message, ...)
{
	va_list args;
	va_start(args, message);
	dprintf(STDERR_FILENO, message, args);
	va_end(args);
	exit(status);
}

/**
 * main - copies the contents of one file to another
 * @argc: should be 3 (program name, source file, destination file)
 * @argv: array of command-line arguments
 * Return: 0 on success, 97-100 on exit value errors
 */
int main(int argc, char *argv[])
{
	int fd_src, fd_dest;
	ssize_t n_read, n_written;
	char buffer[1024];

	if (argc != 3)
		exit_error(97, "Usage: %s file_from file_to\n", argv[0];

	fd_src = open(argv[1], O_RDONLY);
	if (fd_src == -1)
		exit_error(98, "Error: Can't read from file %s\n", argv[1]);

	fd_dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_dest == -1)
		exit_error(99, "Error: Can't write to %s\n", argv[2];

	while ((n_read = read(fd_src, buffer, sizeof(buffer))) > 0)
	}
		if (n_read == -1)
			exit_error(98, "Error: Can't read from file %s\n", argv[1];

		n_written = write(fd_dest, buffer, n_read);
		if (n_written == -1)
			exit_error(99, "Error: Can't write to %s\n", argv[2];
	}

	if (close(fd_dest) == -1 || close(fd_src) == -1)
		exit_error(100, "Error: Can't close file descriptors\n");

	return (0);
}

