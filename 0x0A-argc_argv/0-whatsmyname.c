#include <stdio.h>
/**
 * main - prints the name of the program followed by a new line.
 * @argc: argument counter.
 * @argv: argument value
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	else
	{
		printf("Error, not find");
	}
	return (0);
}
