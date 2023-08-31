#include "main.h"
/**
 * is_divisible - checks if a number is divisible by a divisor
 * @n: number to check
 * @divisor: divisor to check against
 *
 * Return: 1 if n is divisible by divisor, 0 otherwise
 */
int is_divisible(int n, int divisor)
{
	if (divisor == 1)
	{
		return (0);
	}
	if (n % divisor == 0)
	{
		return (1);
	}
	return (is_divisible(n, divisor - 1));
}

/**
 * is_prime_number - checks if an integer is a prime number
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (!is_divisible(n, n - 1));
}
