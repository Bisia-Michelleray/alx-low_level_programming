#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to the struct dog to print
 * Return: always 0 (success)
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
