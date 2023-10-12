#include "main.h"
#include <unistd.h>

/**
 * _putchar - puts c in the standard output
 * @c: character printed
 * Return: 1 is returned when successful
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
