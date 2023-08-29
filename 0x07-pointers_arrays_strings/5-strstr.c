#include "main.h"
/**
 *_strstr - locates a substring.
 *
 * @haystack: input string
 * @needle: what is required to locate.
 *
 * Return: pointer to the beginning of the located substring.
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;
	char *h_temp;

	if (*n == '\0')
	{
		return (haystack);
	}
	while (*h != '\0')
	{
		h_temp = h;
		n = needle;

		while (*h_temp != '\0' && *n != '\0' && *h_temp == *n)
		{
			h_temp++;
			n++;
		}
		if (*n == '\0')
		{
			return (h);
		}
		h++;
	}
	return ('\0');
}
