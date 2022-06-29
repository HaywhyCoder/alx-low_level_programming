#include "main.h"
#include <stdlib.h>

/**
 *argstostr - concatenates all the arguments of a string
 *@ac: argument counter
 *@av: array vector
 *
 *Return: NULL if ac = 0 or av = NULL
 *        Each argument followed by a new string
 */

char *argstostr(int ac, char **av)
{
	int i, c, j, len = ac;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}

	ptr = malloc(sizeof(char) * len + 1);
	if (ptr == NULL)
		return (NULL);

	c = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			ptr[c++] = av[i][j];
		ptr[c++] = '\n';
	}
	ptr[len] = '\0';
	return (ptr);
}
