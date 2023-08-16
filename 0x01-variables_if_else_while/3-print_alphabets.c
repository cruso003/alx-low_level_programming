#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints lowercase and uppercase alphabet'
 * Return: 0 Always
 */
int main(void)
{
	int n = 97;
	int j = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (j <= 90)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
