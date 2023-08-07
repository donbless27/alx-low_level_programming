#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file - function that appends text
 *    at the end of a file
 * @filename: file name
 * @text_content: content
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t m;
	int size;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	size = _strlen(text_content);
	m = write(fd, text_content, size);

	if (m == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}

/**
 * _strlen - length
 * @s: pointer to a char
 * Return: Always 0.
 */

int _strlen(const char *s)
{
	int j = 0;

	while (*(s + j) != '\0')
	{
		j++;
	}

	return (j);
}
