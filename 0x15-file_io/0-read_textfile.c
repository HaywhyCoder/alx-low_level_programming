#include "main.h"

/**
 *read_textfile - reads a text file and prints it to the POSIX standard output.
 *@filename: string containing the filename
 *@letters: the number of letters to read and print
 *
 *Return: the actual number of letters the function could read and print
 *        otherwise - if the file cannot be opened or filename is NULL or write
 *        fails or does not write the expected number of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, w, o;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}
