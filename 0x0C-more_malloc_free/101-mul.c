#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - main function
 * @s: string
 * Return: result
 */

int is_number(char *s);

int main(int argc, char **argv)
{
	long int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (!is_number(argv[1]) || !is_number(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	printf("%ld\n", num1 * num2);
	return (0);
}

/**
 * is_number - multiplies two positive numbers
 * @s: string
 * Return: result
 */

int is_number(char *s)
{
	while (*s)
	{
		if (!isdigit(*s))
			return (0);
		s++;
	}
	return (1);
}
