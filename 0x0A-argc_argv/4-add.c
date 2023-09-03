#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * is_numeric- helps the main function check if the c-line argument is a numb.
 * @str: input string
 * Return: true if numeric, otherwise false
 */
bool is_numeric(char *str)
{
	int i;

	if (str == NULL || *str == '\0')
	{
		return (false);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (false);
		}
	}
	return (true);
}
/**
 * main - adds positive numbers.
 * sum: sum of added numbers
 * num: input nummber
 * @argc: argument count
 * @argv: argumment value
 * Return: 1 if there is an error
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	int num;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!is_numeric(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			num = atoi(argv[i]);
			if (num > 0)
			{
				sum += num;
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
