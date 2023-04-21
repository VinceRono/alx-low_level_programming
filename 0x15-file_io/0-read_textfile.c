#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read the txt file & print to STFOUT
 * @filename: txt file to be read
 * @letters: no. of letters to be read
 * Return: if write fails or does not the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bf = malloc(sizeof(char) * letters);
	t = read(fd, bf, letters);
	w = write(STDOUT_FILENO, bf, t);

	free(bf);
	close(fd);
	return (w);
}
