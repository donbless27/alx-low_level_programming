#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: the file name to create
 * @text_content: content
 * Return: read
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t c;
	int size;
	char *len;

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	size = _strlen(text_content);
	len = malloc(sizeof(char) * size);
	if (!len)
	{
		close(fd);
		return (-1);
	}
	c = write(fd, text_content, size);
	if (c == -1)
	{
		close(fd);
		free(len);
		return (-1);
	}
	close(fd);
	free(len);
	return (1);
}

/**
 * _strlen - length
 * @s: pointer to a char
 * Return: Always 0.
 */

int _strlen(const char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	return (i);
}
