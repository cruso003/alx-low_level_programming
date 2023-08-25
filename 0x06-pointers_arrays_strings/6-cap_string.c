#include "main.h"
#include <stdbool.h>
#include <ctype.h>
/**
 * is_separator - separates the string
 * @c: separated character
 *
 * Return: str
 */
bool is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
		{
			return (true);
		}
	}
	return (false);
}
/**
 * cap_string - capitalize string
 *@str: string
 *
 * Return: str
 */

char *cap_string(char *str)
{
	bool new_word = true;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (is_separator(str[i]))
		{
			new_word = true;
		}
		else if (new_word)
		{
			str[i] = toupper(str[i]);
			new_word = false;
		}
		else
		{
			str[i] = tolower(str[i]);
		}
	}
	return (str);
}
