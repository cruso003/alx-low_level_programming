#include "main.h"
/**
 * sqrt_helper - helps the _sqrt_recurssion function
 * @n: input number
 * @guess: guess number
 *
 * Return: the square root or -1
 */
int sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess * guess < 0 || guess * guess > n)
	{
		return (-1);
	}
	else
	{
		return (sqrt_helper(n, guess + 1));
	}
}
/**
 * _sqrt_recursion - returns the square of a number
 * @n: input number
 *
 * Return: square of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (sqrt_helper(n, 2));
	}
}
