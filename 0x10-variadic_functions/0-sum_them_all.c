#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all- function that returns the sum of all its parameters.
 * @n: integer to be added
 * Return: sum or 0 if n equals 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		va_end(args);
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
