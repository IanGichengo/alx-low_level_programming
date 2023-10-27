#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - start
 * @argc: argument
 * @argv: array
 * Return: result
 */

int main(int argc, char *argv[])
{
	int cents;
	int coins;
	int i;
	int denominations[] = {25, 10, 5, 2, 1};
	int size;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	coins = 0;
	size = sizeof(denominations) / sizeof(int);

	for (i = 0; i < size; i++)
	{
		coins += cents / denominations[i];
		cents %= denominations[i];
	}
	printf("%d\n", coins);
	return (0);
}
