#include "dog.h"
#include <stdlib.h>

/**
 *free_dog - frees a dog
 *@d: dog to be freed
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(dog->owner);
		free(dog->name);
		free(d);
	}
}
