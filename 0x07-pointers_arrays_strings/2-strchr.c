#include "main.h"
#include <stdio.h>
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
	int a;

	while (1)
	{
		a = *s++;

		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
