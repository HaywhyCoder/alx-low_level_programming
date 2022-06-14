#include "main.h"

/**
 *_strcpy - copies a string from src to another
 *@dest: arg 1. where string is copied to
 *@src: source to copy from
 *
 *Return: returns pointed to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while ((dest[i] = src[i]) != '\0')
	{
		i++;
	}
	return (dest);
}
