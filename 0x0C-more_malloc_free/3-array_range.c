#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: min range of the array
 * @max: max range of the array
 * Return: pointer to the array or null if malloc fails
 */
int *array_range(int min, int max)
{
	int *cjc;
	int i;
	int ghc = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}
	cjc = (int *)malloc(sizeof(int) * ghc);
	if (cjc == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ghc; i++)
	{
		cjc[i] = min + i;
	}
	return (cjc);
}
