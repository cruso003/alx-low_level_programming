#include "main.h"
/**
 * is_palindrome - returns 1 if a string is empty, 0 if not
 * @s: input string
 *
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int i;
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		if (s[i] != s[len - 1 - i])
		{
			return (0);
		}
	}
	return (1);
}
