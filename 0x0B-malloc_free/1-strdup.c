#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: input string
 * Return: NULL if str=NULL or the _strdup function on success
 */
char *_strdup(char *str)
{
	size_t len;
	char *dup_str;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);
	dup_str = (char *)malloc((len + 1) * sizeof(char));
	if (dup_str == NULL)
	{
		return (NULL);
	}
	strcpy(dup_str, str);
	return (dup_str);
}
