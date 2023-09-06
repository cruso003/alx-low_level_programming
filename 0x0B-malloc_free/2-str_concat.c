#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1: input string
 * @s2: input string
 * Return: empty string on success or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *cindy;
	size_t len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	cindy = (char *)malloc(len1 + len2 + 1);
	if (cindy == NULL)
	{
		return (NULL);
	}
	strcpy(cindy, s1);
	strcat(cindy, s2);
	return (cindy);
}
