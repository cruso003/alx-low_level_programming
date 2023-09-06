#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * is_space - Check if a character is a space character.
 * @c: The character to check.
 * Return: 1 if the character is a space, 0 otherwise.
 */
int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}
/**
 * strtow - Split a string into words.
 * @str: The input string to split.
 * Return: A pointer to an array of strings (words).
 * Returns NULL if str == NULL or str == "".
 */
char **strtow(char *str)
{
	int len, word_count, word_start, in_word, i, j, word_length;
	char **word_array;

	if (str == NULL || *str == '\0')
		return (NULL);
	len = strlen(str);
	word_array = (char **)malloc((len + 1) * sizeof(char *));
	if (word_array == NULL)
		return (NULL);
	word_count = 0, word_start = 0, in_word = 0;
	for (i = 0; i <= len; i++)
	{
		if (!is_space(str[i]) && !in_word)
		{
			word_start = i;
			in_word = 1;
		}
		else if ((is_space(str[i]) || str[i] == '\0') && in_word)
		{
			word_length = i - word_start;
			word_array[word_count] = (char *)malloc((word_length + 1) * sizeof(char));
			if (word_array[word_count] == NULL)
			{
				for (j = 0; j < word_count; j++)
					free(word_array[j]);
				free(word_array);
				return (NULL);
			}
			strncpy(word_array[word_count], str + word_start, word_length);
			word_array[word_count][word_length] = '\0';
			word_count++;
			in_word = 0;
		}
	}
	if (word_count == 0)
		free(word_array);
		return (NULL);
	word_array[word_count] = NULL;
	return (word_array);
}
