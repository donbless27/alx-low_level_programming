#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - function that reads a text file
 *   and prints it to the POSIX standard output.
 * @filename: path to file
 * @letters: number of letters to read
 * Return: read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t mem, r;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(fd);
		return (0);
	}

	mem = read(fd, buffer, letters);

	if (mem == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	r = write(STDOUT_FILENO, buffer, mem);

	if (r == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	close(fd);
	return (mem);
}
