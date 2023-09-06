#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatenates all the argument of your program
 * @ac: input integer
 * @av: input char
 * Return: NULL if ac == 0 or av == NULL
 */
char *argstostr(int ac, char **av)
{
	int i, total_len, curr_posit;
	char *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	total_len = 0;

	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			total_len += strlen(av[i]) + 1;
		}
	}
	result = (char *)malloc(total_len + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	curr_posit = 0;
	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			strcpy(result + curr_posit, av[i]);
			curr_posit += strlen(av[i]);
			result[curr_posit] = '\n';
			curr_posit++;
		}
	}
	result[total_len] = '\0';
	return (result);
}
