#include <stdio.h>

/**
 * main - print comb5
 * combination no duplicates
 * Return: 0 on success
 */
int main(void)
{
	int ifirstt;
	int i;
	int jfirst;
	int j;

	for (ifirstt = 48; ifirstt < 58; ifirstt++)
	{
		for (i = 48; i < 58; i++)
		{
			j = i + 1;
			jfirst = ifirstt;
			for (; jfirst < 58; jfirst++)
			{
				for (; j < 58; j++)
				{
					putchar(ifirstt);
					putchar(i);
					putchar(' ');
					putchar(jfirst);
					putchar(j);
					if (ifirstt != 57 || jfirst != 57 || i != 56 || j != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
				j = 48;
			}
		}
	}
	putchar('\n');
	return (0);
}
