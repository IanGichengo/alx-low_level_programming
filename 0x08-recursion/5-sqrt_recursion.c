#include "main.h"

/**
 * _sqrt - finds the square root
 * @n: number
 * @i: parameter
 * Return: result
 */

int _sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}

	if (i * i > n)
	{
		return (-1);
	}

	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: result
 * Return: natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt(n, 0));
}
