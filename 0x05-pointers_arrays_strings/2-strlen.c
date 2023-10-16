#include "main.h"

/**
 * _strlen - length of string
 * @s: parameter
 * Return: returns length
 */

int _strlen(char *s)
{
	int h = 0;

	while (*(s + h))
		h++;
	return (h);
}
