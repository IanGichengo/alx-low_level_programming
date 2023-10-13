#include "main.h"
#include <stdio.h>

/**
 * main - prints numbers from 0 - 100 for multiples of three
 * Return: always 0 success
 */

int main(void)
{
	int k;

	for (k = 1; k <= 100; k++)
	{
		if (k % 3 == 0 && k % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (k % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (k % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", k);
		}
	}
	printf("\n");
	return (0);
}
