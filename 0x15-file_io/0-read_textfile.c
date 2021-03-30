#include "holberton.h"

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

	s = malloc(sizeof(char) * letters);

	if (s == NULL || filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	rd = read(file, s, letters);

	close(file);

	if (rd == -1)
		return (0);


	wr = write(STDOUT_FILENO, s, rd);

	free(s);

	if (wr == -1)
		return (0);

return (rd);

}
