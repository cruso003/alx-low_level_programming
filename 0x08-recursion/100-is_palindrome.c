/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 * Return: 1 if it is, 0 if it's not
 */
int is_palindrome(char *s)
{
	char *end = s;

	while (*end != '\0')
	{
		end++;
	}
	end--;
	while (s < end)
	{
		if (*s != *end)
		{
			return (0);
		}
		s++;
		end--;
	}
	return (1);
}
