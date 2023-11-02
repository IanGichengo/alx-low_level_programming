#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the chracter c to the stdout
 * @c: the character to print
 * Return: result
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
