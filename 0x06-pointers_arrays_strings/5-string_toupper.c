#include "main.h"
#include <ctype.h>
/**
 * string_toupper - changes all lowercase letters to uppercase
 *@str: string to be changed
 *
 * Return: str.
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		*ptr = toupper(*ptr);
		ptr++;
	}
	return (str);
}
