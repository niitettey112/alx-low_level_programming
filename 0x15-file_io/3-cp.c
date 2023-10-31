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
	int fd_1, fd_2, n_read, n_wrote;
	char *buffer[1024];

	if (argc != 3)
		__exit(97, NULL, 0);

	/*sets file descriptor for copy-to file*/
	fd_2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd_2 == -1)
		__exit(99, argv[2], 0);

	/*sets file descriptor for copy-from file*/
	fd_1 = open(argv[1], O_RDONLY);
	if (fd_1 == -1)
		__exit(98, argv[1], 0);

	/*reads original file as long as there's more than 0 to read*/
	/*copies/writes contents into new file */
	while ((n_read = read(fd_1, buffer, 1024)) != 0)
	{
		if (n_read == -1)
			__exit(98, argv[1], 0);

		n_wrote = write(fd_2, buffer, n_read);
		if (n_wrote == -1)
			__exit(99, argv[2], 0);
	}

	close(fd_2) == -1 ? (__exit(100, NULL, fd_2)) : close(fd_2);
	close(fd_1) == -1 ? (__exit(100, NULL, fd_1)) : close(fd_1);
	return (0);
}
