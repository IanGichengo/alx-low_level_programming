#include "main.h"

/**
 * is_prime - divides number
 * @n: number
 * @i: parameter
 * Return: prime number
 */

int is_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}

	if (i * i > n)
	{
		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}

	return (is_prime(n, i + 1));
}

/**
 * is_prime_number - checks if the input integer is a prime number
 * @n: number
 * Return: result
 */

int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
