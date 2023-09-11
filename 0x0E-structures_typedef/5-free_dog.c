#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees dogs
 * @d: input value
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
