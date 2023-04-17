#include "dog.h"

/**
 * free_dog - function that frees dogs
 * @d: first member
 * Return: always 0 (success)
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
