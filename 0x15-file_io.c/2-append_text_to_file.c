#include "main.h"

/**
 * _strlen - find length of string
 * @str: string
 * Return: length
 */
int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;

	return (len);
}

/**
 * append_text_to_file - append text and only if file exists
 * @filename: file
 * @text_content: appends this content into file
 * Return: 1 on success, -1 on error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n_wrote;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND | O_CREATE, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		n_wrote = write(fd, text_content, _strlen(text_content));
		if (n_wrote == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
