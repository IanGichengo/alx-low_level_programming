#include "main.h"
#include <stdio.h>

/**
 * main - start
 * @argc: argument
 * @argv: array
 * Return: result
 */

int main(int argc, char *argv[])
{
	(void)argv;

	if (argc > 0)
		printf("%d\n", argc - 1);

	return (0);
}
