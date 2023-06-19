#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: dogs to free
 *
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
