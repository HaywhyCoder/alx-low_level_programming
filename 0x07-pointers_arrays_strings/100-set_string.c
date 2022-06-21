#include "main.h"

/**
 *set_string - sets the value of a pointer to a character
 *@s: pointer to pointer to a string
 *@to: the character
 */

void set_string(char **s, char *to)
{
	*s = to;
}
