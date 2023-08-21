#include "main.h"

/**
 * swap_int - this function swaps the values of two integers.
 * @a: integer 1.
 * @b: integer 2.
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int val = *a;
	*a = *b;
	*b = val;
}
