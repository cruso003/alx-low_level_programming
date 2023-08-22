#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: pointer to string
 * Return: Nothing (modifies the input string to be reversed)
 */
void rev_string(char *s)
{
	int length = 0;
	int start = 0;
	int end;
	
	while (s[length] != '\0')
	{
		length++;
	}
	end = length - 1;
	
	while (start < end)
	{
		char val = s[start];
		s[start] = s[end];
		s[end] = val;
		
		start++;
		end--;
	}
}
