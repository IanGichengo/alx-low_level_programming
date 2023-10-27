#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main- start
 * @argc: argument
 * @argv: array
 * Return: result
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
