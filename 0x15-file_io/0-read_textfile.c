#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- prog that read text file print to STDOUT.
 * @filename: text file that is to be read
 * @letters: num of letters to be read
 * Return: w or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t r;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	r = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	free(buf);
	close(fd);
	return (w);
}
