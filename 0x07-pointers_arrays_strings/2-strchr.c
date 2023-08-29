#include "main.h"
/**
 * _strchr - locates a character in a string
 *
 * @s: input string
 * @c:target character
 *
 * Return:a pointer to the first occurrence of the character c in the string s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
