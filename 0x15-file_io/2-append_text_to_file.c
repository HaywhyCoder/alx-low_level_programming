#include "main.h"

/**
 *append_text_to_file - appends text to the end of a file
 *@filename: pointer to the string containing name of the file
 *@text_content: pointer to string to be appended to the file
 *
 *Return: on sucess - 1
 *        otherwise - -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i++])
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
