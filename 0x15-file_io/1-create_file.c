#include "main.h"

/**
 *create_file - creates a file
 *@filename: string containing the name of the file
 *@text_content: a null terminated string to write to the file
 *
 *Return: 1 - on success
 *       -1 - on failure(file cannot be created  or written)
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0, i = 0;
	mode_t old_mask = umask(0);

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i++])
			len++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);
	umask(old_mask);

	return (1);
}
