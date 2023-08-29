#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: input integer
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int mainDSum = 0;
	int secDSum = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		mainDSum += a[i * size + i];
		secDSum += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", mainDSum, secDSum);
}
