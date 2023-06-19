#include "dog.h"

/**
 * _strdup - creares a duplicate copy of a string
 * @str: string to duplicate
 *
 * Return: pointer to the newly allocated memory or NULL
 */

char *_strdup(char *str)
{
	unsigned int j = 0;
	unsigned int i;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[j] != '\0')
	{
		j++;
	}
	ptr = malloc(sizeof(char) * (j + 1));
	if (ptr != NULL)
	{
		for (i = 0; i <= j; i++)
		{
			ptr[i] = str[i];
		}
	}
	else
	{
		return (NULL);
	}
	return (ptr);
}

/**
 * new_dog - creates a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the dog
 *
 * Return: a pointer to a struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *latter;

	latter = malloc(sizeof(dog_t));
	if (latter == NULL)
	{
		return (NULL);
	}
	latter->name = _strdup(name);
	if (latter->name == NULL)
	{
		free(latter->name);
		return (NULL);
	}
	latter->owner = _strdup(owner);
	if (latter->owner == NULL)
	{
		free(latter);
		free(latter->name);
		return (NULL);
	}
	latter->age = age;
	return (latter);
}
