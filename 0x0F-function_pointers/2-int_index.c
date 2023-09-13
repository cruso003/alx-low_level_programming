#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - searches for an integer
 * @array: pointer array
 * @size: number of elements in arrary
 * @cmp: pointer to the function to be used to compare values
 * Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
