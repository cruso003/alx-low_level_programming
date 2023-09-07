#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * is_digit_string - Check if a string is composed of digits.
 * @str: The string to check.
 * Return: 1 if the string contains only digits, 0 otherwise.
 */
int is_digit_string(const char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 * Return: 0 on success, 98 on incorrect arguments or non-digit input.
 */
int main(int argc, char *argv[])
{
	unsigned long num1;
	unsigned long num2;
	unsigned long result;
	int i, j;
	char *res_str;

	if (argc != 3)
		printf("Error\n");
		return (98);
	if (!is_digit_string(argv[1]) || !is_digit_string(argv[2]))
	{
		printf("Error\n");
		return (98);
	}
	num1 = strtoul(argv[1], NULL, 10);
	num2 = strtoul(argv[2], NULL, 10);
	result = num1 * num2;
	if (result == 0)
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}
	res_str = malloc(20 * sizeof(char));
	if (res_str == NULL)
		return (1);
	for (i = 0; i < 20; i++)
		res_str[i] = '\0';
	i = 0;
	while (result > 0)
	{
		res_str[i] = result % 10 + '0';
		result /= 10;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(res_str[j]);
	_putchar('\n');
	free(res_str);
	return (0);
}
