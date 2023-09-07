#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: input string 1
 * @s2: input string 2
 * @n: unsigned integer
 * Return: pointer to the newly allocated space in memory, which contains s1,
 * If the function fails, it returns NULL otherwise return empty string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t len1 = (s1 != NULL) ? strlen(s1) : 0;
	size_t len2 = (s2 != NULL) ? strlen(s2) : 0;
	char *concat_str;

	if (n >= len2)
	{
		n = len2;
		concat_str = (char *)malloc(len1 + n + 1);
	}
	if (concat_str == NULL)
	{
		return (NULL);
	}
	if (s1 != NULL)
	{
		strcpy(concat_str, s1);
	}
	else
	{
		concat_str[0] = '\0';
	}
	if (n > 0)
	{
		strncat(concat_str, s2, n);
	}
	return (concat_str);
}
