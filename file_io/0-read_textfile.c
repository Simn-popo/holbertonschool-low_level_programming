#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *data;

	while(!filename)
	return (0);

	data = malloc(sizeof(*data) * letters);
	if (!data)
	return (0);

	o = open(filename, O_RDONLY);
	r = read(o, data, letters);
	w = write(STDOUT_FILENO, data , r);

	if (0 == -1 || r == -1 || w == -1 || w != r)
	{
		free(data);
		return (0);
	}
	free(data);
	close(0);
	return (w);
}
