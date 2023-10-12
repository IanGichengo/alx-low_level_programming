#include <stdio.h>
#include <math.h>

/**
 * main - check the code
 * Return: always 0 success
 */

int main(void)
{
	int go;
	long n = 612852475143;
	long max_prime = -1;

	while (n % 2 == 0)
	{
		max_prime = 2;
		n /= 2;
	}

	for (go = 3; go <= sqrt(n); go += 2)
	{
		while (n % go == 0)
		{
			max_prime = go;
			n /= go;
		}
	}

	if (n > 2)
		max_prime = n;

	printf("%ld\n", max_prime);
	return (0);
}
