#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: A pointer to the destination memory where the data will be copied to.
 * @src: A pointer to the source memory from which the data will be copied.
 * @n:The number of bytes to copy from the source to the destination.
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
