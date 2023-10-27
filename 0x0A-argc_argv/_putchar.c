#include <unistd.h>

/**
 * _putchar - writes character to the output
 * @c: parameter
 * Return: character output
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
