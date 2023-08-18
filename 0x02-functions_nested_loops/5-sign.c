#include "main.h"

/**
 * print_sign - Displays the sign of a given number.
 * @n: The integer value that needs its sign to be determined.
 * Return: 1 and outputs "+" if 'n' is greater than zero.
 * Returns 0 and outputs 0 if 'n' is zero
 * Returns -1 and outputs "-" if 'n' is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
