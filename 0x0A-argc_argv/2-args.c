#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @argc: argument count
 * @argv: argument value
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	printf("%s\n", argv[0]);
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
			printf("%s\n", argv[i]);
	}
	else if (argc < 1)
	{
		printf("Error");
	}
	return (0);
}
