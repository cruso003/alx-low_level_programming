#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str:- pointer to a string
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int length = 0;
	int start;

	while (str[length] != '\0')
	{
		length++;
	}

	start = (length + 1) / 2;

	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');
}
