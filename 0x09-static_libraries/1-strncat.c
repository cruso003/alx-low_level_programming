#include "main.h"
/**
 * _strncat - a function that concatenates two strings.
 * @dest: resulting string being return
 * @src: used to append to dest string
 * @n: at most n bytes from src
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	
	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	return (dest);
}
