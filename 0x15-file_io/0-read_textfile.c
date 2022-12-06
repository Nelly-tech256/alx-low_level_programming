#include "main.h"
#include <stdlib.h>

/**
 *  read_textfile - function that reads a text file and prints
 *               it to the POSIX standard output
 * @letters: is the number of letters it should read and print
 * @filename: pointer to the file to be read
 *
 * Return: the actual number of letters it could read and print
 *     otherwise - if the file can not be opened or read, return 0
 *               - if filename is NULL return 0
 *               - if write fails or does not write the expected amount
 *                  of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, w, o;
	char *buffer;

	if (filename == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (0 == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(0);

	return (w);

}
