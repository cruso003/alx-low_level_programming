#include "main.h"
/**
 * is_prime_number - returns 1 if the input is a prime number
 *
 * @n: input number
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	int i = 5;

	if (n <= 1 || n % 2 == 0 || n % 3 == 0)
	{
		return (0);
	}
	while (i * i <= n)
	{
		if (n % i == 0 || n % (i + 2) == 0)
		{
			return (0);
		}
		i += 6;
	}
	return (1);
}
