#include "holberton.h"

/**
 * create_file - create a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{

	int file, wr, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	while (text_content && text_content[len])
		len++;

	wr = write(file, text_content, len);

	close(file);

	if (wr == -1)
		return (-1);

return (1);

}

