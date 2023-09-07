#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocate a memory for an array, using malloc
 * @nmemb: unsigned int n member of an array
 * @size: size of the array
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *char_ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	char_ptr = (char *)ptr;
	for (i = 0; i < nmemb * size; i++)
	{
		char_ptr[i] = 0;
	}
	return (ptr);
}
