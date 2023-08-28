#include "main.h"
/**
 * _memset - fills memory with a constant byte
 *
 * @s: original pointer
 * @b: set original pointer to b
 * @n: allocated memory size
 *
 * Return: pointer to the memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *original = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}
	return (original);
}
