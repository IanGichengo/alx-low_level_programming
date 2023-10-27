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
	int l;

	for (l = 0; l < argc; l++)
		printf("%s\n", argv[l]);
	return (0);
}
