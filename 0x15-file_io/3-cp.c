#include "holberton.h"

/**
 * ReadError - if error in reading file
 * @argv: argument
 */

void ReadError(char *argv)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv);
	exit(98);
}

/**
 * WriteError - if error in writing file
 * @argv: argument
 */

void WriteError(char *argv)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv);
	exit(99);
}

/**
 * CloseError - if error in closing file
 * @file: file to close
 */

void CloseError(int file)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file);
	exit(100);
}

/**
 * main - create copy of a file & add its
 * content into another file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, rd, wr, cl;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		ReadError(argv[1]);

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
		WriteError(argv[2]);

	rd = read(file_from, buf, 1024);
	if (rd == -1)
		ReadError(argv[1]);

	while (rd > 0)	/* While there is character in buffer */
	{
		wr = write(file_to, buf, rd);
		if (wr == -1)
			WriteError(argv[2]);

		rd = read(file_from, buf, 1024);
		if (rd == -1)
			ReadError(argv[1]);
	}

	cl = close(file_from);
	if (cl == -1)
		CloseError(file_from);
	cl = close(file_to);
	if (cl == -1)
		CloseError(file_to);

return (0);
}
