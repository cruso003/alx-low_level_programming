#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: input string
 * @accept: interested character
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int found;
	char *i;
	
	while (*s != '\0')
	{
		found = 0;
		for (i = accept; *i != '\0'; i++)
		{
			if (*s == *i)
			{
				found = 1;
				
				break;
			}
		}
		if (!found)
		{
			break;
		}
		length++;
		s++;
	}
	return (length);
}
