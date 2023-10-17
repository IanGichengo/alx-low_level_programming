#include <stdio.h>

/**
 * fibonacci - finds and prints the first 98 fibonacci number
 * @n: parameter
 */

void fibonacci(int n)
{
	int i;
	long long int f1, f2, fn;

	f1 = 1;
	f2 = 2;

	printf("%lld, %lld", f1, f2);

	for (i = 3; i <= n; i++)
	{
		fn = f1 + f2;
		printf(", %lld", fn);
		f1 = f2;
		f2 = fn;
	}
	printf("\n");
}

/**
 * main - main function
 * Return: 0 success
 */

int main(void)
{
	fibonacci(98);

	return (0);
}
