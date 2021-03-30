#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standart output
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{

	int file;
	char *buf;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT | O_RDWR);
	}

	rd = read();

	wr = write();

return (1);

}

