#include "main.h"

/**
 * main - prints numbers from 0 - 100 for multiples of three
 * Return: always 0 success
 */

int main(void)
{
	int m;

	for (m = 1; m <= 100; m++)
	{
		if (m % 3 = 0 && m % 5 != 0)
		{
			printf("Fizz");
		}

		else if (m % 5 == 0 && m % 3 != 0)
		{
			printf("Buzz");
		}
		else if (m % 3 == 0 && m % 5 == 0)
		{
			printf("Fizzbuzz");
		}

		else if (m = 1)
		{
			printf("%d", m);
		}

		else
		{
			printf("%d", m);
		}
	}
	printf("\n");
	return (0);
}
