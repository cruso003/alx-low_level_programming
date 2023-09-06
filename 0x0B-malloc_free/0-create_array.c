#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars and initialize it
 * with a specific char.
 * @size: input integer
 * @c: input character
 * Return: pointer to the array, or Null if size = 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *tetama = malloc(sizeof(char) * size);

	if (tetama == NULL || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		tetama[i] = c;
	}
	return (tetama);
}
