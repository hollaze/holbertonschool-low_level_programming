#include "holberton.h"
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standart output
 * @filename: const char
 * @letters: number of letters it could read & print
 * Return: actual number of letters it could read & print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, rd, wr;
	char *s;

	if (filename == NULL)
		return (0);

	s = malloc(sizeof(char) * letters);

	if (s == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	rd = read(file, s, letters);

	if (rd == -1)
		return (0);

	close(file);

	wr = write(STDOUT_FILENO, s, rd);

	free(s);

	if (wr == -1)
		return (0);

return (wr);

}
