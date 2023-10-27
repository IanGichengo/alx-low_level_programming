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
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		char *endptr;
		int num = strtol(argv[i], &endptr, 10);

		if (*endptr != '\0')
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
