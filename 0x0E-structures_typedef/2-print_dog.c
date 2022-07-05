#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_dog - prints a dog struct
 *@d: dog to be printed
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->age < 0)
			d->age = "(nil)";
		if (d->owner == NULL)
			d->owner = "nil";
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
	return;
}
