#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument value
 * num1: input number 1
 * num2: input number 2
 * product: product of num1 and num2
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, product;

	if (argc != 3 || argv[1][0] == '\0' || argv[2][0] == '\0')
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		product = num1 * num2;
		printf("%d\n", product);
	}
	return (0);
}
